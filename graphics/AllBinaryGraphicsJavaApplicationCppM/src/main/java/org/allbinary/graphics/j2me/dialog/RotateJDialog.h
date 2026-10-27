
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
#include <org/allbinary/thread/ARunnable.h>

      
#include <java/util/HashMap.h>

      
#include <org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/dialog/JDialog.h"
#include "org/allbinary/graphics/j2me/dialog/Frame.h"
#include "org/allbinary/graphics/j2me/dialog/JTextField.h"
#include "org/allbinary/graphics/j2me/dialog/JLabel.h"
#include "org/allbinary/graphics/j2me/dialog/JPanel.h"
#include "org/allbinary/graphics/j2me/dialog/JButton.h"
#include "org/allbinary/graphics/j2me/dialog/ActionListener.h"
#include "org/allbinary/graphics/j2me/dialog/ActionEvent.h"
#include "org/allbinary/graphics/j2me/dialog/GroupLayout.h"
#include "org/allbinary/graphics/j2me/dialog/Short.h"
#include "org/allbinary/graphics/j2me/dialog/EventQueue.h"
#include "org/allbinary/graphics/j2me/dialog/JFrame.h"
#include "org/allbinary/graphics/j2me/dialog/WindowAdapter.h"
#include "org/allbinary/graphics/j2me/dialog/WindowEvent.h"

class RotateJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args);

    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: HashMap<Object*, Object*>* hashMap = StdUtil::getInstance()->createHashMap();

public: RotateJDialog(java::awt::Frame* parent, bool modal);

    private: void initComponents();

    private: void jButton1ActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JTextField* angleIncrementJTextField;

    private: javax::swing::JButton* jButton1;

    private: javax::swing::JLabel* jLabel1;

    private: javax::swing::JLabel* jLabel2;

    private: javax::swing::JPanel* jPanel1;

    private: javax::swing::JTextField* totalRotationJTextField;

};

            


        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_H
