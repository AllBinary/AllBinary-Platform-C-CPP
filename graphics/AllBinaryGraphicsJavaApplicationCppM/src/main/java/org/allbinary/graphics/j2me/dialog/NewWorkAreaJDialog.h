
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_NEWWORKAREAJDIALOG_H
        #define ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_NEWWORKAREAJDIALOG_H

            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/event/ActionEvent.h>

      
#include <java/awt/event/ActionListener.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/graphics/j2me/GraphicsException.h>

      
#include <org/allbinary/graphics/j2me/MyFrame.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JDialog.h"
#include "Dimension.h"
#include "JTextField.h"
#include "Frame.h"
#include "JButton.h"
#include "GridLayout.h"
#include "JLabel.h"
#include "WindowAdapter.h"
#include "WindowEvent.h"

class NewWorkAreaJDialog: public javax.swing.JDialog {
        

    public static main(std::vector<string> args);

    private: parent: MyFrame;

    private: dimension: Dimension;

    private: xSizeJTextField: JTextField;

    private: ySizeJTextField: JTextField;

    private: nameJTextField: JTextField;

public constructor (MyFrame parent, bool modal, Dimension dimension, string newName);

                //@Throws(Exception.constructor)
            
    disposeNewDialog();

    initComponents();

    closeDialog(java.awt.event.WindowEvent evt);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_NEWWORKAREAJDIALOG_H
