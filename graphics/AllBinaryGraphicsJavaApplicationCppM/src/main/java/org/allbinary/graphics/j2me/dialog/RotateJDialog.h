
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/System.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JDialog.h"
#include "Frame.h"
#include "JTextField.h"
#include "JLabel.h"
#include "JPanel.h"
#include "JButton.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "EventQueue.h"
#include "JFrame.h"
#include "WindowAdapter.h"
#include "WindowEvent.h"

class RotateJDialog: public javax.swing.JDialog {
        

    public static main(std::vector<string> args);

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: hashMap: HashMap<any, any> = new HashMap<any, any>();

public constructor (java.awt.Frame parent, bool modal);

    initComponents();

    jButton1ActionPerformed(java.awt.event.ActionEvent evt);

    private: angleIncrementJTextField: javax.swing.JTextField;

    private: jButton1: javax.swing.JButton;

    private: jLabel1: javax.swing.JLabel;

    private: jLabel2: javax.swing.JLabel;

    private: jPanel1: javax.swing.JPanel;

    private: totalRotationJTextField: javax.swing.JTextField;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_H
