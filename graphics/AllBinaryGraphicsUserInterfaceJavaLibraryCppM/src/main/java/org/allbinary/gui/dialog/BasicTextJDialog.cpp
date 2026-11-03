
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
        



        #ifndef ORG_ALLBINARY_GUI_DIALOG_BASICTEXTJDIALOG_CPP
        #define ORG_ALLBINARY_GUI_DIALOG_BASICTEXTJDIALOG_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/gui/dialog/BasicTextJDialog.h"
        

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


BasicTextJDialog::BasicTextJDialog(java::awt::Frame* parent, bool modal, std::string text) : javax::swing::JDialog(parent, modal){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initComponents();
    
this->setText(text);
    
}


    auto BasicTextJDialog::setText(std::string text) -> void{
this->textJLabel->setText(text);
    
}


    auto BasicTextJDialog::addCloseListener(CloseJDialogListenerInterface* closeListenerInterface) -> void{
this->closeListenerInterface= closeListenerInterface;
    
}


BasicTextJDialog::BasicTextJDialog(std::string text){
this->initComponents();
    
this->textJLabel->setText(text);
    
}


    auto BasicTextJDialog::initComponents() -> void{
this->jButton1= new javax::swing::JButton();
    
this->textJLabel= new javax::swing::JLabel();
    
setDefaultCloseOperation(swing->WindowConstants->DISPOSE_ON_CLOSE);
    
this->jButton1->setText("OK");
    
jButton1->addActionListener([&]() {
    static thread_local BasicTextJDialog* anonymousOuter0 = nullptr;
    anonymousOuter0 = this;
    class Anonymous0 : public java::awt::event::ActionListener {
    public:
    using java::awt::event::ActionListener::ActionListener;
    BasicTextJDialog* outer = anonymousOuter0;

    public: void actionPerformed(java::awt::event::ActionEvent* evt){
outer->jButton1ActionPerformed(evt);
    
}

    };
    return new Anonymous0();
}());
    
this->textJLabel->setText("No Text Set");
    

    javax::swing::GroupLayout* layout = new javax::swing::GroupLayout(getContentPane());;
    
getContentPane()->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addGroup(layout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addGap(80, 80, 80)->addComponent(jButton1))->addGroup(layout->createSequentialGroup()->addContainerGap()->addComponent(textJLabel, swing->GroupLayout->DEFAULT_SIZE, 184, Short::MAX_VALUE)))->addContainerGap()));
    
layout->setVerticalGroup(layout->createParallelGroup(swing->GroupLayout->Alignment->LEADING)->addGroup(layout->createSequentialGroup()->addGap(20, 20, 20)->addComponent(textJLabel, swing->GroupLayout->PREFERRED_SIZE, 20, swing->GroupLayout->PREFERRED_SIZE)->addGap(30, 30, 30)->addComponent(jButton1)));
    
pack();
    
}


    auto BasicTextJDialog::jButton1ActionPerformed(java::awt::event::ActionEvent* evt) -> void{
this->setVisible(false);
    

                        if(this->closeListenerInterface != 
                                    nullptr
                                )
                        
                                    {
                                    this->closeListenerInterface->onClose();
    

                                    }
                                
}


    auto BasicTextJDialog::main(std::vector<std::string> args) -> void{
awt->EventQueue->invokeLater([]() {
    class Anonymous0 : public ARunnable {
    public:
    using ARunnable::ARunnable;

    public: void run(){
(new BasicTextJDialog(new javax::swing::JFrame(), true, "Test"))->setVisible(true);
    
}

    };
    return new Anonymous0();
}());
    
}




        #endif //ORG_ALLBINARY_GUI_DIALOG_BASICTEXTJDIALOG_CPP
