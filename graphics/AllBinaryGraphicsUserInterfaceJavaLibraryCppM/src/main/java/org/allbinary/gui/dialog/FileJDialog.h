
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

        
        #pragma push_macro("JAVA_COMPLETE_TYPES")
        #undef JAVA_COMPLETE_TYPES
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
class ARunnable;
#include <java/io/File.h>
class LogUtil;
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/gui/dialog/JDialog.h"
class FileJDialogListenerInterface;
class Frame;
class JFileChooser;
class ActionListener;
class ActionEvent;
class GroupLayout;
class Short;
class EventQueue;
class JFrame;

                                
        #pragma pop_macro("JAVA_COMPLETE_TYPES")

        
class FileJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args);

    /*protected*/ public: LogUtil* logUtil;

    private: FileJDialogListenerInterface* finishedListenerInterface;

public: FileJDialog();

public: FileJDialog(java::awt::Frame* parent, bool modal);

    public: void addFinishedListener(FileJDialogListenerInterface* finishedListenerInterface);

    private: void initComponents();

    private: void jFileChooser1ActionPerformed(java::awt::event::ActionEvent* evt);

    public: javax::swing::JFileChooser* getJFileChooser1();

    public: void setJFileChooser1(javax::swing::JFileChooser* jFileChooser1);

    private: javax::swing::JFileChooser* jFileChooser1;

};

            


        #endif //ORG_ALLBINARY_GUI_DIALOG_FILEJDIALOG_H

        
        #if defined(JAVA_COMPLETE_TYPES) && !defined(ORG_ALLBINARY_GUI_DIALOG_FILEJDIALOG_H_COMPLETE)
        #define ORG_ALLBINARY_GUI_DIALOG_FILEJDIALOG_H_COMPLETE
        #if __has_include(<org/allbinary/thread/ARunnable.h>)
#include <org/allbinary/thread/ARunnable.h>
#endif
#if __has_include(<java/io/File.h>)
#include <java/io/File.h>
#endif
#if __has_include(<org/allbinary/logic/communication/log/LogUtil.h>)
#include <org/allbinary/logic/communication/log/LogUtil.h>
#endif
#if __has_include("org/allbinary/gui/dialog/JDialog.h")
#include "org/allbinary/gui/dialog/JDialog.h"
#endif
#if __has_include("org/allbinary/gui/dialog/FileJDialogListenerInterface.h")
#include "org/allbinary/gui/dialog/FileJDialogListenerInterface.h"
#endif
#if __has_include("org/allbinary/gui/dialog/Frame.h")
#include "org/allbinary/gui/dialog/Frame.h"
#endif
#if __has_include("org/allbinary/gui/dialog/JFileChooser.h")
#include "org/allbinary/gui/dialog/JFileChooser.h"
#endif
#if __has_include("org/allbinary/gui/dialog/ActionListener.h")
#include "org/allbinary/gui/dialog/ActionListener.h"
#endif
#if __has_include("org/allbinary/gui/dialog/ActionEvent.h")
#include "org/allbinary/gui/dialog/ActionEvent.h"
#endif
#if __has_include("org/allbinary/gui/dialog/GroupLayout.h")
#include "org/allbinary/gui/dialog/GroupLayout.h"
#endif
#if __has_include("org/allbinary/gui/dialog/Short.h")
#include "org/allbinary/gui/dialog/Short.h"
#endif
#if __has_include("org/allbinary/gui/dialog/EventQueue.h")
#include "org/allbinary/gui/dialog/EventQueue.h"
#endif
#if __has_include("org/allbinary/gui/dialog/JFrame.h")
#include "org/allbinary/gui/dialog/JFrame.h"
#endif

        #endif
    
