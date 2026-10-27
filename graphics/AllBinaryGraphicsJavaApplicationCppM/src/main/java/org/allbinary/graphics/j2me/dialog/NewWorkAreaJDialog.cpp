
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

    public: static void main(std::vector<std::string> args){

        try {
            (new NewWorkAreaJDialog(new MyFrame(), true, new Dimension(100, 100), "testing"))->show();
    

                //: 
} catch(Exception& e) 
            {
}

}


    private: MyFrame* parent;

    private: Dimension* dimension;

    private: JTextField* xSizeJTextField;

    private: JTextField* ySizeJTextField;

    private: JTextField* nameJTextField;

public: NewWorkAreaJDialog(MyFrame* parent, bool modal, Dimension* dimension, std::string newName) : javax::swing::JDialog(dynamic_cast<java::awt::Frame*>(parent), modal){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            this->initComponents();
    
this->parent= parent;
    
this->xSizeJTextField= new JTextField("12");
    
this->ySizeJTextField= new JTextField("12");
    
this->nameJTextField= new JTextField(newName);
    
this->dimension= dimension;
    

    JButton* submitButton = new JButton("Ok");;
    
submitButton->addActionListener(class extends ActionListener
                                {
                                
    public: void actionPerformed(ActionEvent* evt){

        try {
            disposeNewDialog();
    

                //: 
} catch(Exception& e) 
            {
}

}

                                }
                            );
    
this->setSize(150, 100);
    
this->getContentPane()->setLayout(new GridLayout(5, 2));
    
this->getContentPane()->add(new JLabel("Please enter"));
    
this->getContentPane()->add(new JLabel(" the size."));
    
this->getContentPane()->add(new JLabel("Name:"));
    
this->getContentPane()->add(this->nameJTextField);
    
this->getContentPane()->add(new JLabel("X: "));
    
this->getContentPane()->add(this->xSizeJTextField);
    
this->getContentPane()->add(new JLabel("Y: "));
    
this->getContentPane()->add(this->ySizeJTextField);
    
this->getContentPane()->add(submitButton);
    
this->show();
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    private: void disposeNewDialog(){

        try {
            
    int32_t canvasWidth = int32_t(this->xSizeJTextField->getText());;
    

    int32_t canvasHeight = int32_t(this->ySizeJTextField->getText());;
    

    std::string newName = this->nameJTextField->getText();;
    

                        if(false)
                        
                                    throw new GraphicsException("No Name", this, "disposeNewDialog");
                                

    WorkAreaJPanel* workAreaJPanel = new WorkAreaJPanel(newName, this->dimension, canvasWidth.intValue(), canvasHeight.intValue());;
    
workAreaJPanel->setLayout(new GridLayout(1, 1));
    
this->parent->add(dynamic_cast<WorkAreaJPanelInterface*>(workAreaJPanel));
    
this->dispose();
    

                //: 
} catch(Exception& e) 
            {



                            throw e;
                    
}

}


    private: void initComponents(){
addWindowListener(class extends java::awt::event::WindowAdapter
                                {
                                
    public: void windowClosing(java::awt::event::WindowEvent* evt){
closeDialog(evt);
    
}

                                }
                            );
    
pack();
    
}


    private: void closeDialog(java::awt::event::WindowEvent* evt){
setVisible(false);
    
dispose();
    
}


};

            

