
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
            #include "java/lang/System.h"
        
            #include "java/lang/Integer.h"
        
class ARunnable;
#include <java/util/HashMap.h>
class HashMapJDialogListenerInterface;
class StdUtil;
class LogUtil;
class CommonStrings;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/graphics/j2me/dialog/JDialog.h"
class Frame;
class JTextField;
class JLabel;
class JPanel;
class JButton;
class ActionListener;
class ActionEvent;
class GroupLayout;
class Short;
class EventQueue;
class JFrame;
class WindowAdapter;
class WindowEvent;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class RotateJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args);

    /*protected*/ public: LogUtil* logUtil;

    private: HashMap<Object*, Object*>* hashMap;

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

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_H_COMPLETE)
        #define ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_H_COMPLETE
        #if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<java/util/HashMap.h>)
#include <java/util/HashMap.h>
#endif
#if __has_include(<org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>)
#include <org/allbinary/gui/dialog/HashMapJDialogListenerInterface.h>
#endif
#if __has_include(<org/allbinary/logic/StdUtil.h>)
#include <org/allbinary/logic/StdUtil.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include(<org/allbinary/string/CommonStrings.h>)
#include <org/allbinary/string/CommonStrings.h>
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/JDialog.h")
#include "org/allbinary/graphics/j2me/dialog/JDialog.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/Frame.h")
#include "org/allbinary/graphics/j2me/dialog/Frame.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/JTextField.h")
#include "org/allbinary/graphics/j2me/dialog/JTextField.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/JLabel.h")
#include "org/allbinary/graphics/j2me/dialog/JLabel.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/JPanel.h")
#include "org/allbinary/graphics/j2me/dialog/JPanel.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/JButton.h")
#include "org/allbinary/graphics/j2me/dialog/JButton.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/ActionListener.h")
#include "org/allbinary/graphics/j2me/dialog/ActionListener.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/ActionEvent.h")
#include "org/allbinary/graphics/j2me/dialog/ActionEvent.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/GroupLayout.h")
#include "org/allbinary/graphics/j2me/dialog/GroupLayout.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/Short.h")
#include "org/allbinary/graphics/j2me/dialog/Short.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/EventQueue.h")
#include "org/allbinary/graphics/j2me/dialog/EventQueue.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/JFrame.h")
#include "org/allbinary/graphics/j2me/dialog/JFrame.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/WindowAdapter.h")
#include "org/allbinary/graphics/j2me/dialog/WindowAdapter.h"
#endif
#if __has_include("org/allbinary/graphics/j2me/dialog/WindowEvent.h")
#include "org/allbinary/graphics/j2me/dialog/WindowEvent.h"
#endif

        #endif
    
