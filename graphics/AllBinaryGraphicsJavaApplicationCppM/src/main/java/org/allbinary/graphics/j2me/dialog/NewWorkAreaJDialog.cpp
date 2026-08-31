
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
        



            #include "../../../../../java/lang/Exception.h"
        
            #include "../../../../../java/lang/Integer.h"
        
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

class NewWorkAreaJDialog: public javax.swing.JDialog {
        

    public static main(std::vector<string> args){

        try {
            new NewWorkAreaJDialog(new MyFrame(), true, new Dimension(100, 100), "testing").show();
    

                //: 
} catch(e) 
            {
}

}


    private: parent: MyFrame;

    private: dimension: Dimension;

    private: xSizeJTextField: JTextField;

    private: ySizeJTextField: JTextField;

    private: nameJTextField: JTextField;

public constructor (MyFrame parent, bool modal, Dimension dimension, string newName){
            super(parent as java.awt.Frame, modal);
                    

                            //For kotlin this is before the body of the constructor.
                    

        try {
            this.initComponents();
    
this.parent= parent;
    
this.xSizeJTextField= new JTextField("12");
    
this.ySizeJTextField= new JTextField("12");
    
this.nameJTextField= new JTextField(newName);
    
this.dimension= dimension;
    

    submitButton: JButton = new JButton("Ok");;
    
submitButton!.addActionListener(new class extends ActionListener
                                {
                                
    public actionPerformed(ActionEvent evt){

        try {
            disposeNewDialog();
    

                //: 
} catch(e) 
            {
}

}

                                }
                            );
    
this.setSize(150, 100);
    
this.getContentPane()!.setLayout(new GridLayout(5, 2));
    
this.getContentPane()!.add(new JLabel("Please enter"));
    
this.getContentPane()!.add(new JLabel(" the size."));
    
this.getContentPane()!.add(new JLabel("Name:"));
    
this.getContentPane()!.add(this.nameJTextField);
    
this.getContentPane()!.add(new JLabel("X: "));
    
this.getContentPane()!.add(this.xSizeJTextField);
    
this.getContentPane()!.add(new JLabel("Y: "));
    
this.getContentPane()!.add(this.ySizeJTextField);
    
this.getContentPane()!.add(submitButton);
    
this.show();
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


                //@Throws(Exception.constructor)
            
    disposeNewDialog(){

        try {
            
    canvasWidth: Integer = new Integer(this.xSizeJTextField!.getText());;
    

    canvasHeight: Integer = new Integer(this.ySizeJTextField!.getText());;
    

    newName: string = this.nameJTextField!.getText()!;;
    

                        if(newName == 
                                    null
                                )
                        
                                    throw new GraphicsException("No Name", this, "disposeNewDialog");
                                

    workAreaJPanel: WorkAreaJPanel = new WorkAreaJPanel(newName, this.dimension, canvasWidth!.intValue(), canvasHeight!.intValue());;
    
workAreaJPanel!.setLayout(new GridLayout(1, 1));
    
this.parent.add(workAreaJPanel as WorkAreaJPanelInterface);
    
this.dispose();
    

                //: 
} catch(e) 
            {



                            throw e;
                    
}

}


    initComponents(){
addWindowListener(new class extends java.awt.event.WindowAdapter
                                {
                                
    public windowClosing(java.awt.event.WindowEvent evt){
closeDialog(evt);
    
}

                                }
                            );
    
pack();
    
}


    closeDialog(java.awt.event.WindowEvent evt){
setVisible(false);
    
dispose();
    
}


};

            

