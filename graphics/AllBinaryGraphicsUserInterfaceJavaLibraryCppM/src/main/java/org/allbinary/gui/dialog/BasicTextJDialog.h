
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

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/thread/ARunnable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/gui/dialog/JDialog.h"
#include "org/allbinary/gui/dialog/CloseJDialogListenerInterface.h"
#include "org/allbinary/gui/dialog/Frame.h"
#include "org/allbinary/gui/dialog/JButton.h"
#include "org/allbinary/gui/dialog/JLabel.h"
#include "org/allbinary/gui/dialog/ActionListener.h"
#include "org/allbinary/gui/dialog/ActionEvent.h"
#include "org/allbinary/gui/dialog/GroupLayout.h"
#include "org/allbinary/gui/dialog/Short.h"
#include "org/allbinary/gui/dialog/EventQueue.h"
#include "org/allbinary/gui/dialog/JFrame.h"

class BasicTextJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args);

    private: CloseJDialogListenerInterface* closeListenerInterface;

public: BasicTextJDialog(java::awt::Frame* parent, bool modal, std::string text);

    public: void setText(std::string text);

    public: void addCloseListener(CloseJDialogListenerInterface* closeListenerInterface);

public: BasicTextJDialog(std::string text);

    private: void initComponents();

    private: void jButton1ActionPerformed(java::awt::event::ActionEvent* evt);

    private: javax::swing::JButton* jButton1;

    private: javax::swing::JLabel* textJLabel;

};

            


        #endif //ORG_ALLBINARY_GUI_DIALOG_BASICTEXTJDIALOG_H
