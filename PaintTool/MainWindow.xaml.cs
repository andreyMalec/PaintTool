using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Interop;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Threading;

namespace PaintTool
{
    public class Paint
    {
        public static int BrushSize = 10;
        public static int DrawingItemFirst;
        public static List<string> DrawingItems = new List<string>();
        public static List<string> DrawingItemRedo = new List<string>();
        public static List<UIElement> DrawingItemsRedo = new List<UIElement>();
        public static Point StartPos;
        public static Point PrevPos;
        public static bool IsPaint = false;
        public static SolidColorBrush Brush = new SolidColorBrush(Color.FromRgb(0, 0, 0));

        public static void MoveTo(double x, double y)
        {
            StartPos = new Point(x, y);
        }
    }

    public partial class MainWindow : Window
    {
        public static RoutedCommand UndoCom = new RoutedCommand();
        public static RoutedCommand RedoCom = new RoutedCommand();

        public void UndoCom_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            UndoHotKey();
        }

        public void RedoCom_Executed(object sender, ExecutedRoutedEventArgs e)
        {
            RedoHotKey();
        }

        public void UndoHotKey()
        {
            if (Paint.DrawingItems.Count > 0)
            {
                int FirstPos = int.Parse(Paint.DrawingItems[Paint.DrawingItems.Count - 1].Split(' ')[0]);
                int SecondPos = int.Parse(Paint.DrawingItems[Paint.DrawingItems.Count - 1].Split(' ')[1]);

                try
                {
                    for (var i = FirstPos; i <= SecondPos; i++)
                    {
                        Paint.DrawingItemsRedo.Add(Canvas.Children[FirstPos]);
                        Canvas.Children.RemoveAt(FirstPos);
                    }
                }
                catch { }

                Paint.DrawingItemRedo.Add(FirstPos.ToString() + ' ' + SecondPos.ToString());
                Paint.DrawingItems.Remove(FirstPos.ToString() + ' ' + SecondPos.ToString());
            }
        }

        public void RedoHotKey()
        {
            if (Paint.DrawingItemRedo.Count > 0)
            {
                int FirstPos = int.Parse(Paint.DrawingItemRedo[Paint.DrawingItemRedo.Count - 1].Split(' ')[0]);
                int SecondPos = int.Parse(Paint.DrawingItemRedo[Paint.DrawingItemRedo.Count - 1].Split(' ')[1]);

                //try
                {
                    for (var i = SecondPos - FirstPos; i >= 0; i--)
                    {
                        Canvas.Children.Add(Paint.DrawingItemsRedo[i]);
                        Paint.DrawingItemsRedo.RemoveAt(i);
                    }
                }
                //catch { }

                Paint.DrawingItems.Add(FirstPos.ToString() + ' ' + SecondPos.ToString());
                Paint.DrawingItemRedo.Remove(FirstPos.ToString() + ' ' + SecondPos.ToString());
            }
        }

        public MainWindow()
        {
            InitializeComponent();
            
            DispatcherTimer Timer1 = new DispatcherTimer();

            Timer1.Tick += new EventHandler(Timer1_Tick);
            Timer1.Interval = new TimeSpan(0, 0, 0, 0, 100);
            Timer1.Start();
        }

        private void UndoMenu_Click(object sender, RoutedEventArgs e)
        {
            UndoHotKey();
        }

        private void RedoMenu_Click(object sender, RoutedEventArgs e)
        {
            RedoHotKey();
        }

        private void Timer1_Tick(object sender, EventArgs e)
        {
            int.TryParse(PenSizeBox.Text, out Paint.BrushSize);
        }

        private void MenuItem_Click(object sender, RoutedEventArgs e)
        {
            
        }

        private void MenuItem_Click_1(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("PaintTool"+ Environment.NewLine +
            Environment.NewLine+"Version: "+ System.Reflection.Assembly.GetExecutingAssembly().GetName().Version.ToString()+
            Environment.NewLine + "Dev: Andrey Malec"+
            Environment.NewLine + "Copyright ©  2017"+new string(' ', 64),
            "About PaintTool", MessageBoxButton.OK);
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            var sInd = PenSizeBox.SelectedIndex;
            try { PenSizeBox.SelectedItem = PenSizeBox.Items[sInd + 1]; }
            catch { PenSizeBox.SelectedItem = PenSizeBox.Items[0]; }
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            var sInd = PenSizeBox.SelectedIndex;
            try { PenSizeBox.SelectedItem = PenSizeBox.Items[sInd - 1]; }
            catch { PenSizeBox.SelectedItem = PenSizeBox.Items[PenSizeBox.Items.Count-1]; }
        }

        private void DrawArea_MouseDown(object sender, MouseButtonEventArgs e)
        {
            if (e.LeftButton == MouseButtonState.Pressed)
            {
                Paint.DrawingItemFirst = Canvas.Children.Count-1;

                Paint.MoveTo(e.GetPosition(Canvas).X, e.GetPosition(Canvas).Y);

                Ellipse el = new Ellipse();
                el.SetValue(Canvas.LeftProperty, Mouse.GetPosition(Canvas).X - Paint.BrushSize / 2);
                el.SetValue(Canvas.TopProperty, Mouse.GetPosition(Canvas).Y - Paint.BrushSize / 2);
                el.Width = Paint.BrushSize;
                el.Height = Paint.BrushSize;
                el.Fill = Paint.Brush;
                Canvas.Children.Add(el);
            }
        }

        private void DrawArea_MouseMove(object sender, MouseEventArgs e)
        {
            if (e.LeftButton == MouseButtonState.Pressed)
            {
                var FinalPos = new Point(e.GetPosition(Canvas).X, e.GetPosition(Canvas).Y);

                Line ln = new Line()
                {
                    X1 = Paint.StartPos.X,
                    X2 = FinalPos.X,
                    Y1 = Paint.StartPos.Y,
                    Y2 = FinalPos.Y,
                    StrokeThickness = Paint.BrushSize,
                    Stroke = Paint.Brush
                };
                Canvas.Children.Add(ln);

                Ellipse el = new Ellipse();
                el.SetValue(Canvas.LeftProperty, FinalPos.X - Paint.BrushSize / 2);
                el.SetValue(Canvas.TopProperty, FinalPos.Y - Paint.BrushSize / 2);
                el.Width = Paint.BrushSize;
                el.Height = Paint.BrushSize;
                el.Fill = Paint.Brush;
                Canvas.Children.Add(el);

                Paint.MoveTo(FinalPos.X, FinalPos.Y);
            }
        }

        private void DrawArea_MouseUp(object sender, MouseButtonEventArgs e)
        {
            Paint.DrawingItems.Add((++Paint.DrawingItemFirst).ToString()+' '+(Canvas.Children.Count-1).ToString());
        }

        private void MenuItem_Click_2(object sender, RoutedEventArgs e)
        {
            for (var i = Canvas.Children.Count-1; i >= 0; i--)
                Canvas.Children.RemoveAt(i);
        }
        
    }
}
