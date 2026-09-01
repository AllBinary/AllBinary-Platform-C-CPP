
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

class BasicTextJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args);

    private: CloseJDialogListenerInterface closeListenerInterface;

public: BasicTextJDialog(java::awt::Frame parent, bool modal, std::string text);

    public: void setText(std::string text);

    public: void addCloseListener(CloseJDialogListenerInterface closeListenerInterface);

public: BasicTextJDialog(std::string text);

    private: void initComponents();

    private: void jButton1ActionPerformed(java::awt::event::ActionEvent evt);

    private: javax::swing::JButton jButton1;

    private: javax::swing::JLabel textJLabel;

};

            


        #endif //ORG_ALLBINARY_GUI_DIALOG_BASICTEXTJDIALOG_H
