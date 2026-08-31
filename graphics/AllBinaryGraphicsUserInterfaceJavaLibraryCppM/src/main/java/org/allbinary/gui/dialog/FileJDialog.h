
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

class FileJDialog: public javax.swing.JDialog {
        

    public static main(std::vector<string> args);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: finishedListenerInterface: FileJDialogListenerInterface;

public constructor ();

public constructor (java.awt.Frame parent, bool modal);

    public addFinishedListener(FileJDialogListenerInterface finishedListenerInterface);

    initComponents();

    jFileChooser1ActionPerformed(java.awt.event.ActionEvent evt);

    public javax.swing.JFileChooser getJFileChooser1();

    public setJFileChooser1(javax.swing.JFileChooser jFileChooser1);

    private: jFileChooser1: javax.swing.JFileChooser;

};

            


        #endif //ORG_ALLBINARY_GUI_DIALOG_FILEJDIALOG_H
