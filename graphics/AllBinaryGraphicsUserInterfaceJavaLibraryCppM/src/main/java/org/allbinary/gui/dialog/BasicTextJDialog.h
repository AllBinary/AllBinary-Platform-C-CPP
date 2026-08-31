
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
        



        #ifndef ORG_ALLBINARY_GUI_DIALOG_BASICTEXTJDIALOG_H
        #define ORG_ALLBINARY_GUI_DIALOG_BASICTEXTJDIALOG_H

#include <org/allbinary/thread/ARunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JDialog.h"
#include "CloseJDialogListenerInterface.h"
#include "Frame.h"
#include "JButton.h"
#include "JLabel.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "EventQueue.h"
#include "JFrame.h"

class BasicTextJDialog: public javax.swing.JDialog {
        

    public static main(std::vector<string> args);

    private: closeListenerInterface: CloseJDialogListenerInterface;

public constructor (java.awt.Frame parent, bool modal, string text);

    public setText(string text);

    public addCloseListener(CloseJDialogListenerInterface closeListenerInterface);

public constructor (string text);

    initComponents();

    jButton1ActionPerformed(java.awt.event.ActionEvent evt);

    private: jButton1: javax.swing.JButton;

    private: textJLabel: javax.swing.JLabel;

};

            


        #endif //ORG_ALLBINARY_GUI_DIALOG_BASICTEXTJDIALOG_H
