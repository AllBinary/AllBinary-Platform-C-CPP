
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
        #include "JDialog.h"
#include "Dimension.h"
#include "JTextField.h"
#include "Frame.h"
#include "JButton.h"
#include "GridLayout.h"
#include "JLabel.h"
#include "WindowAdapter.h"
#include "WindowEvent.h"

class NewWorkAreaJDialog: public javax::swing::JDialog {

    public: static void main(std::vector<std::string> args){

        try {
            NewWorkAreaJDialog(MyFrame(), true, Dimension(100, 100), "testing").show();
    

                //: 
} catch(e) 
            {
}

}


    private: MyFrame parent;

    private: Dimension dimension;

    private: JTextField xSizeJTextField;

    private: JTextField ySizeJTextField;

    private: JTextField nameJTextField;

public: NewWorkAreaJDialog(MyFrame parent, bool modal, Dimension dimension, std::string newName) : javax::swing::JDialog(parent, modal){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            this->initComponents();
    
this->parent= parent;
    
this->xSizeJTextField= JTextField("12");
    
this->ySizeJTextField= JTextField("12");
    
this->nameJTextField= JTextField(newName);
    
this->dimension= dimension;
    

    JButton submitButton = JButton("Ok");;
    
submitButton.addActionListener(class extends ActionListener
                                {
                                
    public: void actionPerformed(ActionEvent evt){

        try {
            disposeNewDialog();
    

                //: 
} catch(e) 
            {
}

}

                                }
                            );
    
this->setSize(150, 100);
    
this->getContentPane().setLayout(GridLayout(5, 2));
    
this->getContentPane().add(JLabel("Please enter"));
    
this->getContentPane().add(JLabel(" the size."));
    
this->getContentPane().add(JLabel("Name:"));
    
this->getContentPane().add(this->nameJTextField);
    
this->getContentPane().add(JLabel("X: "));
    
this->getContentPane().add(this->xSizeJTextField);
    
this->getContentPane().add(JLabel("Y: "));
    
this->getContentPane().add(this->ySizeJTextField);
    
this->getContentPane().add(submitButton);
    
this->show();
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    private: void disposeNewDialog(){

        try {
            
    Integer canvasWidth = Integer(this->xSizeJTextField.getText());;
    

    Integer canvasHeight = Integer(this->ySizeJTextField.getText());;
    

    std::string newName = this->nameJTextField.getText();;
    

                        if(false)
                        
                                    throw GraphicsException("No Name", this, "disposeNewDialog");
                                

    WorkAreaJPanel workAreaJPanel = WorkAreaJPanel(newName, this->dimension, canvasWidth.intValue(), canvasHeight.intValue());;
    
workAreaJPanel.setLayout(GridLayout(1, 1));
    
this->parent.add(workAreaJPanel);
    
this->dispose();
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    private: void initComponents(){
addWindowListener(class extends java::awt::event::WindowAdapter
                                {
                                
    public: void windowClosing(java::awt::event::WindowEvent evt){
closeDialog(evt);
    
}

                                }
                            );
    
pack();
    
}


    private: void closeDialog(java::awt::event::WindowEvent evt){
setVisible(false);
    
dispose();
    
}


};

            

