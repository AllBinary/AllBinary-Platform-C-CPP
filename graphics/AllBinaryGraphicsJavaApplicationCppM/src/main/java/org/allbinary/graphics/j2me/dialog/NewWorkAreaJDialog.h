
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/Integer.h"
        
#include <java/awt.h>

      
#include <java/awt/event/ActionEvent.h>

      
#include <java/awt/event/ActionListener.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/graphics/j2me/GraphicsException.h>

      
#include <org/allbinary/graphics/j2me/MyFrame.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanel.h>

      
#include <org/allbinary/graphics/j2me/workarea/WorkAreaJPanelInterface.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/dialog/JDialog.h"
#include "org/allbinary/graphics/j2me/dialog/Dimension.h"
#include "org/allbinary/graphics/j2me/dialog/JTextField.h"
#include "org/allbinary/graphics/j2me/dialog/Frame.h"
#include "org/allbinary/graphics/j2me/dialog/JButton.h"
#include "org/allbinary/graphics/j2me/dialog/GridLayout.h"
#include "org/allbinary/graphics/j2me/dialog/JLabel.h"
#include "org/allbinary/graphics/j2me/dialog/WindowAdapter.h"
#include "org/allbinary/graphics/j2me/dialog/WindowEvent.h"

class NewWorkAreaJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args);

    private: MyFrame* parent;

    private: Dimension* dimension;

    private: JTextField* xSizeJTextField;

    private: JTextField* ySizeJTextField;

    private: JTextField* nameJTextField;

public: NewWorkAreaJDialog(MyFrame* parent, bool modal, Dimension* dimension, std::string newName);

                //@Throws(Exception.constructor)
            
    private: void disposeNewDialog();

    private: void initComponents();

    private: void closeDialog(java::awt::event::WindowEvent* evt);

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_NEWWORKAREAJDIALOG_H
