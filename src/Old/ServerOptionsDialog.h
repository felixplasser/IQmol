#ifndef IQMOL_SERVEROPTIONSDIALOG_H
#define IQMOL_SERVEROPTIONSDIALOG_H
/*******************************************************************************
         
  Copyright (C) 2011-2013 Andrew Gilbert
      
  This file is part of IQmol, a free molecular visualization program. See
  <http://iqmol.org> for more details.
         
  IQmol is free software: you can redistribute it and/or modify it under the
  terms of the GNU General Public License as published by the Free Software  
  Foundation, either version 3 of the License, or (at your option) any later  
  version.

  IQmol is distributed in the hope that it will be useful, but WITHOUT ANY
  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
  FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
  details.
      
  You should have received a copy of the GNU General Public License along
  with IQmol.  If not, see <http://www.gnu.org/licenses/>.
   
********************************************************************************/

#include "ui_ServerOptionsDialog.h"


namespace IQmol {

   class Server;

   class ServerOptionsDialog : public QDialog {

      Q_OBJECT

      public:
         ServerOptionsDialog(QWidget* parent, Server* server);

      private Q_SLOTS:
         void copyToServer();
         void on_clearCookieButton_clicked(bool);

      private:
         Ui::ServerOptionsDialog m_dialog;
         Server* m_server;
   };


} // end namespace IQmol


#endif
