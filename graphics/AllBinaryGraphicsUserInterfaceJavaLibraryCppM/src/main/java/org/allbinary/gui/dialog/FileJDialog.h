
        /*
                * 
                *  AllBinary Open License Version 1
                *  Copyright (c) 2011 AllBinary
                *  
                *  By agreeing to this license you and any business entity you represent are
                *  legally bound to the AllBinary Open License Version 1 legal agreement.
                *  
                *  You may obtain the AllBinary Open License Version 1 legal agreement from
                *  AllBinary or the root directory of AllBinary's AllBinary Platform repository.
                *  
                *  Created By: Travis Berthelot  
        */
        
        /* Generated Code Do Not Modify */
        



        #ifndef ORG_ALLBINARY_GUI_DIALOG_FILEJDIALOG_H
        #define ORG_ALLBINARY_GUI_DIALOG_FILEJDIALOG_H

            #include <vector>
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <java/io/File.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JDialog.h"
#include "FileJDialogListenerInterface.h"
#include "Frame.h"
#include "JFileChooser.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "EventQueue.h"
#include "JFrame.h"

class FileJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args);

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: FileJDialogListenerInterface finishedListenerInterface;

public: FileJDialog();

public: FileJDialog(java::awt::Frame parent, bool modal);

    public: void addFinishedListener(FileJDialogListenerInterface finishedListenerInterface);

    private: void initComponents();

    private: void jFileChooser1ActionPerformed(java::awt::event::ActionEvent evt);

    public: javax::swing::JFileChooser getJFileChooser1();

    public: void setJFileChooser1(javax::swing::JFileChooser jFileChooser1);

    private: javax::swing::JFileChooser jFileChooser1;

};

            


        #endif //ORG_ALLBINARY_GUI_DIALOG_FILEJDIALOG_H
