
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
        



        #ifndef ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_CPP
        #define ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/graphics/j2me/dialog/RotateJDialog.h"
        

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

      

#include <javax/swing/WindowConstants.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/LayoutStyle.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>

#include <javax/swing/GroupLayout.h>
















                                        
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


RotateJDialog::RotateJDialog(java::awt::Frame* parent, bool modal) : javax::swing::JDialog(parent, modal), logUtil(LogUtil::getInstance()), hashMap(StdUtil::getInstance()->createHashMap()){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initComponents();
    
}


    auto RotateJDialog::initComponents() -> void{
angleIncrementJTextField= new javax::swing::JTextField();
    
this->jLabel1= new javax::swing::JLabel();
    
this->totalRotationJTextField= new javax::swing::JTextField();
    
this->jLabel2= new javax::swing::JLabel();
    
this->jPanel1= new javax::swing::JPanel();
    
this->jButton1= new javax::swing::JButton();
    
setDefaultCloseOperation(WindowConstants::DISPOSE_ON_CLOSE);
    
this->angleIncrementJTextField->setText("36");
    
this->jLabel1->setText("Angle Increment:");
    
this->totalRotationJTextField->setText("360");
    
this->jLabel2->setText("Total Angular Rotation:");
    
this->jButton1->setText("OK");
    
this->jButton1->addActionListener([&]() {
    static thread_local RotateJDialog* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    RotateJDialog* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->jButton1ActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    

    javax::swing::GroupLayout* jPanel1Layout = new javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1->setLayout(jPanel1Layout);
    
jPanel1Layout->setHorizontalGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(jPanel1Layout->createSequentialGroup()->addGap(62, 62, 62)->addComponent(jButton1)->addContainerGap(62, Short::MAX_VALUE)));
    
jPanel1Layout->setVerticalGroup(jPanel1Layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(jButton1));
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(getContentPane());;
    
getContentPane()->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addContainerGap()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->TRAILING)->addComponent(jLabel1)->addComponent(jLabel2))->addPreferredGap(LayoutStyle::ComponentPlacement->UNRELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addComponent(totalRotationJTextField, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, 31, Short::MAX_VALUE)->addComponent(angleIncrementJTextField, GroupLayout::Alignment->TRAILING, GroupLayout::PREFERRED_SIZE, 31, GroupLayout::PREFERRED_SIZE))->addContainerGap())->addComponent(jPanel1, GroupLayout::Alignment->TRAILING, GroupLayout::DEFAULT_SIZE, GroupLayout::DEFAULT_SIZE, Short::MAX_VALUE));
    
layout->setVerticalGroup(layout->createParallelGroup(GroupLayout::Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addContainerGap()->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(angleIncrementJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel1))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED)->addGroup(layout->createParallelGroup(GroupLayout::Alignment->BASELINE)->addComponent(totalRotationJTextField, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addComponent(jLabel2))->addPreferredGap(LayoutStyle::ComponentPlacement->RELATED, 16, Short::MAX_VALUE)->addComponent(jPanel1, GroupLayout::PREFERRED_SIZE, GroupLayout::DEFAULT_SIZE, GroupLayout::PREFERRED_SIZE)->addContainerGap()));
    
pack();
    
}


    auto RotateJDialog::jButton1ActionPerformed(java::awt::event::ActionEvent* evt) -> void{

        try {
            this->hashMap->put(Integer.valueOf(0)Integer.valueOf(this->angleIncrementJTextField->getText()));
    
this->hashMap->put(Integer.valueOf(1)Integer.valueOf(this->totalRotationJTextField->getText()));
    
(dynamic_cast<HashMapJDialogListenerInterface*>(this->getParent()))->onHashMap(this->hashMap);
    
this->setVisible(false);
    

                //: 
} catch(Exception& e) 
            {

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF(commonStrings->EXCEPTION, this, "jButton1ActionPerformed");
    
}

}


    auto RotateJDialog::main(std::vector<std::string> args) -> void{
EventQueue::invokeLater([]() {
    class Anonymous0 : public ARunnable {
    public:
    using ARunnable::ARunnable;

    public: void run(){

    RotateJDialog* dialog = new RotateJDialog(new javax::swing::JFrame(), true);;
    
dialog->addWindowListener([&]() {
    static thread_local Anonymous0* anonymousOuter1 = nullptr;
    anonymousOuter1 = this;
    class Anonymous1 : public java::awt::event::WindowAdapter {
    public:
    using java::awt::event::WindowAdapter::WindowAdapter;
    Anonymous0* outer = anonymousOuter1;

    public: void windowClosing(java::awt::event::WindowEvent* e){
System.exit(0);
    
}

    };
    return new Anonymous1();
}());
    
dialog->setVisible(true);
    
}

    };
    return new Anonymous0();
}());
    
}




        #endif //ORG_ALLBINARY_GRAPHICS_J2ME_DIALOG_ROTATEJDIALOG_CPP
