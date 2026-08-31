
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
        



            #include "../../../../../../../../../../java/lang/Exception.h"
        
#include <java/util/Vector.h>

      
#include <javax/swing.h>

      
#include <org/allbinary/input/media/image/InputImageType.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "ImageActionScriptOutputInterface.h"
#include "ImageTypes.h"
#include "DefaultListModel.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "JCheckBox.h"
#include "JScrollPane.h"
#include "JList.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "Insets.h"
#include "AbstractListModel.h"
#include "GroupLayout.h"
#include "Short.h"

class ImageActionScriptOutputJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: capturedImageActionScriptOutputInterface: ImageActionScriptOutputInterface;

public constructor (ImageActionScriptOutputInterface capturedImageActionScriptOutputInterface){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.initComponents();
    
this.capturedImageActionScriptOutputInterface= capturedImageActionScriptOutputInterface;
    
this.set();
    
}


    set(){
this.setImageTypeJlistModel();
    

    imageTypes: ImageTypes = this.capturedImageActionScriptOutputInterface!.getImageTypes()!;;
    

    vector: Vector = imageTypes!.getVector()!;;
    

    selectedArray: std::vector<int32_t> = new Array(vector.length);;
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    imageType: InputImageType = vector.get(index) as InputImageType;;
    
selectedArray[index++]= imageType!.getIndex();
    
}

this.itemTypesJList!.setSelectedIndices(selectedArray);
    

                        if(this.capturedImageActionScriptOutputInterface!.isSaved())
                        
                                    {
                                    this.saveJCheckBox!.setSelected(true);
    

                                    }
                                

                        if(this.capturedImageActionScriptOutputInterface!.isSaved())
                        
                                    {
                                    this.displayJCheckBox!.setSelected(true);
    

                                    }
                                
this.capturedImageActionScriptOutputInterface!.log();
    
}


    update(){

    anyType: std::vector<any> = this.itemTypesJList!.getSelectedValues()!;;
    

    imageTypes: ImageTypes = anyType.slice(, ).join('')!;;
    
this.capturedImageActionScriptOutputInterface!.setImageTypes(imageTypes);
    

                        if(this.saveJCheckBox!.isSelected())
                        
                                    {
                                    this.capturedImageActionScriptOutputInterface!.setSaved(true);
    

                                    }
                                
                        else {
                            this.capturedImageActionScriptOutputInterface!.setSaved(false);
    

                        }
                            

                        if(this.displayJCheckBox!.isSelected())
                        
                                    {
                                    this.capturedImageActionScriptOutputInterface!.setDisplay(true);
    

                                    }
                                
                        else {
                            this.capturedImageActionScriptOutputInterface!.setDisplay(false);
    

                        }
                            
this.capturedImageActionScriptOutputInterface!.log();
    
}


    setImageTypeJlistModel(){

    defaultListModel: DefaultListModel = new DefaultListModel();;
    

    vector: Vector = InputImageType.getAllAsVector()!;;
    

    size: int32_t = vector.length!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    imageType: InputImageType = vector.get(index) as InputImageType;;
    
defaultListModel!.addElement(imageType!.getName());
    
}

this.itemTypesJList!.setModel(defaultListModel);
    
}


    public javax.swing.JDialog getCapturedImageActionJDialog(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.capturedImageActionJDialog;
    
}


    public setCapturedImageActionJDialog(javax.swing.JDialog capturedImageActionJDialog){
this.capturedImageActionJDialog= capturedImageActionJDialog;
    
}


    initComponents(){
this.capturedImageActionJDialog= new javax.swing.JDialog();
    
this.titleJLabel= new javax.swing.JLabel();
    
this.okJButton= new javax.swing.JButton();
    
this.saveJCheckBox= new javax.swing.JCheckBox();
    
this.displayJCheckBox= new javax.swing.JCheckBox();
    
this.jScrollPane1= new javax.swing.JScrollPane();
    
this.itemTypesJList= new javax.swing.JList();
    
this.capturedImageActionJButton= new javax.swing.JButton();
    
this.jLabel1= new javax.swing.JLabel();
    
this.capturedImageActionJDialog!.setMinimumSize(new java.awt.Dimension(250, 250));
    
this.titleJLabel!.setText("Image Output Options");
    
this.okJButton!.setText("OK");
    
this.okJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.saveJCheckBox!.setText("Save To File");
    
this.saveJCheckBox!.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this.saveJCheckBox!.setMargin(new java.awt.Insets(0, 0, 0, 0));
    
this.displayJCheckBox!.setText("Display");
    
this.displayJCheckBox!.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this.displayJCheckBox!.setMargin(new java.awt.Insets(0, 0, 0, 0));
    
this.displayJCheckBox!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
displayJCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    
this.itemTypesJList!.setModel(new class extends javax.swing.AbstractListModel
                                {
                                
    strings: std::vector<string> = 
                                                        [
                                                            "Item 1","Item 2","Item 3","Item 4","Item 5"
                                                        ];
    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return strings.length;
    
}

    public any getElementAt(int32_t i){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return strings[i]!;
    
}

                                }
                            );
    
this.jScrollPane1!.setViewportView(this.itemTypesJList);
    

    capturedImageActionJDialogLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.capturedImageActionJDialog!.getContentPane());;
    
this.capturedImageActionJDialog!.getContentPane()!.setLayout(capturedImageActionJDialogLayout);
    
capturedImageActionJDialogLayout!.setHorizontalGroup(capturedImageActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(capturedImageActionJDialogLayout!.createSequentialGroup()!.addGroup(capturedImageActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(capturedImageActionJDialogLayout!.createSequentialGroup()!.addGap(61, 61, 61)!.addComponent(titleJLabel))!.addGroup(capturedImageActionJDialogLayout!.createSequentialGroup()!.addContainerGap()!.addGroup(capturedImageActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(capturedImageActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(displayJCheckBox)!.addComponent(saveJCheckBox, javax.swing.GroupLayout.Alignment.TRAILING))!.addGroup(capturedImageActionJDialogLayout!.createSequentialGroup()!.addGap(84, 84, 84)!.addComponent(okJButton))))!.addGroup(capturedImageActionJDialogLayout!.createSequentialGroup()!.addContainerGap()!.addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 216, Short.MAX_VALUE)))!.addContainerGap()));
    
capturedImageActionJDialogLayout!.setVerticalGroup(capturedImageActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(capturedImageActionJDialogLayout!.createSequentialGroup()!.addComponent(titleJLabel)!.addGap(5, 5, 5)!.addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 105, Short.MAX_VALUE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(saveJCheckBox)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(displayJCheckBox)!.addGap(9, 9, 9)!.addComponent(okJButton)!.addContainerGap()));
    
setMinimumSize(new java.awt.Dimension(100, 0));
    
this.capturedImageActionJButton!.setText("Edit");
    
this.capturedImageActionJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
capturedImageActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel1!.setText("Capture Image:");
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(jLabel1)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addComponent(capturedImageActionJButton)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel1)!.addComponent(capturedImageActionJButton)));
    
}


    displayJCheckBoxActionPerformed(java.awt.event.ActionEvent evt){
}


    okJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.update();
    
this.getCapturedImageActionJDialog()!.setVisible(false);
    
}


    capturedImageActionJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.getCapturedImageActionJDialog()!.setVisible(true);
    
}


    private: capturedImageActionJButton: javax.swing.JButton;

    private: capturedImageActionJDialog: javax.swing.JDialog;

    private: displayJCheckBox: javax.swing.JCheckBox;

    private: itemTypesJList: javax.swing.JList;

    private: jLabel1: javax.swing.JLabel;

    private: jScrollPane1: javax.swing.JScrollPane;

    private: okJButton: javax.swing.JButton;

    private: saveJCheckBox: javax.swing.JCheckBox;

    private: titleJLabel: javax.swing.JLabel;

};

            

