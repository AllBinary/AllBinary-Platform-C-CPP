
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
        



            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
#include <org/allbinary/thread/ARunnable.h>

      
#include <java/io/File.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/gui/dialog/JDialog.h"
#include "org/allbinary/gui/dialog/FileJDialogListenerInterface.h"
#include "org/allbinary/gui/dialog/Frame.h"
#include "org/allbinary/gui/dialog/JFileChooser.h"
#include "org/allbinary/gui/dialog/ActionListener.h"
#include "org/allbinary/gui/dialog/ActionEvent.h"
#include "org/allbinary/gui/dialog/GroupLayout.h"
#include "org/allbinary/gui/dialog/Short.h"
#include "org/allbinary/gui/dialog/EventQueue.h"
#include "org/allbinary/gui/dialog/JFrame.h"

class FileJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args){
java.awt.EventQueue.invokeLater(class extends ARunnable
                                {
                                
    public: void run(){
(new FileJDialog(new javax::swing::JFrame(), true))->setVisible(true);
    
}

                                }
                            );
    
}


    protected: LogUtil* logUtil = LogUtil::getInstance();

    private: FileJDialogListenerInterface* finishedListenerInterface;

public: FileJDialog() : javax::swing::JDialog(){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initComponents();
    
this->getJFileChooser1()->setMultiSelectionEnabled(true);
    
}


public: FileJDialog(java::awt::Frame* parent, bool modal) : javax::swing::JDialog(parent, modal){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->initComponents();
    
this->getJFileChooser1()->setMultiSelectionEnabled(true);
    
}


    public: void addFinishedListener(FileJDialogListenerInterface* finishedListenerInterface){
this->finishedListenerInterface= finishedListenerInterface;
    
}


    private: void initComponents(){
this->jFileChooser1= new javax::swing::JFileChooser();
    
setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
    
this->jFileChooser1->addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent* evt){
jFileChooser1ActionPerformed(evt);
    
}

                                }
                            );
    

    org::jdesktop::layout::GroupLayout* layout = new org::jdesktop::layout::GroupLayout(getContentPane());;
    
getContentPane()->setLayout(layout);
    
layout->setHorizontalGroup(layout->createParallelGroup(org.jdesktop.layout->GroupLayout.LEADING)->add(org.jdesktop.layout->GroupLayout.TRAILING, layout->createSequentialGroup()->addContainerGap(org.jdesktop.layout->GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)->add(jFileChooser1, org.jdesktop.layout->GroupLayout.PREFERRED_SIZE, org.jdesktop.layout->GroupLayout.DEFAULT_SIZE, org.jdesktop.layout->GroupLayout.PREFERRED_SIZE)->addContainerGap()));
    
layout->setVerticalGroup(layout->createParallelGroup(org.jdesktop.layout->GroupLayout.LEADING)->add(layout->createSequentialGroup()->addContainerGap()->add(jFileChooser1, org.jdesktop.layout->GroupLayout.PREFERRED_SIZE, 357, org.jdesktop.layout->GroupLayout.PREFERRED_SIZE)->addContainerGap(org.jdesktop.layout->GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
pack();
    
}


    private: void jFileChooser1ActionPerformed(java::awt::event::ActionEvent* evt){
this->logUtil->putF("Starting Action Command: " +evt->getActionCommand(), this, "ActionPerformed");
    

    std::vector<File*> files = this->getJFileChooser1()->getSelectedFiles();;
    

                        if(evt->getActionCommand() == this->getJFileChooser1()->CANCEL_SELECTION)
                        
                                    {
                                    this->setVisible(false);
    

                                    }
                                

                        if(evt->getActionCommand() == this->getJFileChooser1()->APPROVE_SELECTION)
                        
                                    {
                                    
                        if(files != 
                                    nullptr
                                 && files.size() > 0)
                        
                                    {
                                    this->finishedListenerInterface->onFiles(files);
    

                                    }
                                

                                    }
                                
}


    public: javax::swing::JFileChooser* getJFileChooser1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->jFileChooser1;
    
}


    public: void setJFileChooser1(javax::swing::JFileChooser* jFileChooser1){
this->jFileChooser1= jFileChooser1;
    
}


    private: javax::swing::JFileChooser* jFileChooser1;

};

            

