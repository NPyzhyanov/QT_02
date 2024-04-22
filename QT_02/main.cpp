#include <QApplication>
#include <QSqlDatabase>
#include <QNetworkAccessManager>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    QNetworkAccessManager na;
    
    QMessageBox net_info;
    net_info.setText(na.isStrictTransportSecurityEnabled() ? "HSTS is enabled" : "HSTS is disabled");
    net_info.show();
    
    QSqlDatabase my_db;
    
    QMessageBox sql_info;
    sql_info.setText(my_db.isValid() ? "db is valid" : "db is invalid");
    sql_info.show();
    
    return a.exec();
}
