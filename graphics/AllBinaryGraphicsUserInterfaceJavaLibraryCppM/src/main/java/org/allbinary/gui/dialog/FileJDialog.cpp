
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
        



#include <org/allbinary/thread/ARunnable.h>

      
#include <java/io/File.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JDialog.h"
#include "FileJDialogListenerInterface.h"
#include "Frame.h"
#include "JFileChooser.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "EventQueue.h"
#include "JFrame.h"

class FileJDialog: public javax.swing.JDialog {
        

    public static main(std::vector<string> args){
java.awt.EventQueue.invokeLater(new class extends ARunnable
                                {
                                
    public run(){
new FileJDialog(new javax.swing.JFrame(), true).setVisible(true);
    
}

                                }
                            );
    
}


    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: finishedListenerInterface: FileJDialogListenerInterface;

public constructor (){
            super();
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initComponents();
    
this.getJFileChooser1()!.setMultiSelectionEnabled(true);
    
}


public constructor (java.awt.Frame parent, bool modal){
            super(parent, modal);
                    

                            //For kotlin this is before the body of the constructor.
                    
this.initComponents();
    
this.getJFileChooser1()!.setMultiSelectionEnabled(true);
    
}


    public addFinishedListener(FileJDialogListenerInterface finishedListenerInterface){
this.finishedListenerInterface= finishedListenerInterface;
    
}


    initComponents(){
this.jFileChooser1= new javax.swing.JFileChooser();
    
setDefaultCloseOperation(javax.swing.WindowConstants.DISPOSE_ON_CLOSE);
    
this.jFileChooser1!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
jFileChooser1ActionPerformed(evt);
    
}

                                }
                            );
    

    layout: org.jdesktop.layout.GroupLayout = new org.jdesktop.layout.GroupLayout(getContentPane());;
    
getContentPane()!.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(org.jdesktop.layout.GroupLayout.TRAILING, layout.createSequentialGroup()!.addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.add(jFileChooser1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)!.addContainerGap()));
    
layout.setVerticalGroup(layout.createParallelGroup(org.jdesktop.layout.GroupLayout.LEADING)!.add(layout.createSequentialGroup()!.addContainerGap()!.add(jFileChooser1, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE, 357, org.jdesktop.layout.GroupLayout.PREFERRED_SIZE)!.addContainerGap(org.jdesktop.layout.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
pack();
    
}


    jFileChooser1ActionPerformed(java.awt.event.ActionEvent evt){
this.logUtil!.putF("Starting Action Command: " +evt.getActionCommand(), this, "ActionPerformed");
    

    files: std::vector<File> = this.getJFileChooser1()!.getSelectedFiles()!;;
    

                        if(evt.getActionCommand() == this.getJFileChooser1()!.CANCEL_SELECTION)
                        
                                    {
                                    this.setVisible(false);
    

                                    }
                                

                        if(evt.getActionCommand() == this.getJFileChooser1()!.APPROVE_SELECTION)
                        
                                    {
                                    
                        if(files != 
                                    null
                                 && files.length > 0)
                        
                                    {
                                    this.finishedListenerInterface!.onFiles(files);
    

                                    }
                                

                                    }
                                
}


    public javax.swing.JFileChooser getJFileChooser1(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.jFileChooser1;
    
}


    public setJFileChooser1(javax.swing.JFileChooser jFileChooser1){
this.jFileChooser1= jFileChooser1;
    
}


    private: jFileChooser1: javax.swing.JFileChooser;

};

            

