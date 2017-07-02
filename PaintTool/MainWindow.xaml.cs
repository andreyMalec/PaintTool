using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace PaintTool
{
    /// <summary>
    /// Логика взаимодействия для MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void MenuItem_Click(object sender, RoutedEventArgs e)
        {
            Close();
        }

        private void MenuItem_Click_1(object sender, RoutedEventArgs e)
        {
            MessageBox.Show("PaintTool"+ Environment.NewLine +
            Environment.NewLine+"Version: "+ System.Reflection.Assembly.GetExecutingAssembly().GetName().Version.ToString()+
            Environment.NewLine + "Dev: Andrey Malec"+
            Environment.NewLine + "Copyright ©  2017"+new string(' ', 64),
            "About PaintTool", MessageBoxButton.OK);
        }
    }
}
