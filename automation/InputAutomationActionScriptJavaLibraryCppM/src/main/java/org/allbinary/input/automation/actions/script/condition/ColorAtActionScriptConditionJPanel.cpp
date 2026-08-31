
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
        



            #include "../../../../../../../java/lang/Integer.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringValidationUtil.h>

      
#include <org/allbinary/media/image/analysis/ColorRangeInterface.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "ColorAtActionScriptConditionInterface.h"
#include "JTextField.h"
#include "JLabel.h"
#include "JDialog.h"
#include "JButton.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"

class ColorAtActionScriptConditionJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: colorAtActionScriptConditionInterface: ColorAtActionScriptConditionInterface;

public constructor (ColorAtActionScriptConditionInterface colorAtActionScriptConditionInterface){

            super();
        this.logUtil!.putF(this.commonStrings!.START, this, this.commonStrings!.CONSTRUCTOR);
    
this.initComponents();
    
this.colorAtActionScriptConditionInterface= colorAtActionScriptConditionInterface;
    
this.set();
    
}


    set(){

    colorRangeInterface: ColorRangeInterface = this.colorAtActionScriptConditionInterface!.getColorRangeInterface()!;;
    
this.getMinRedJTextField()!.setText(colorRangeInterface!.getMinRed().toString());
    
this.getMaxRedJTextField()!.setText(colorRangeInterface!.getMaxRed().toString());
    
this.getMinGreenJTextField()!.setText(colorRangeInterface!.getMinGreen().toString());
    
this.getMaxGreenJTextField()!.setText(colorRangeInterface!.getMaxGreen().toString());
    
this.getMinBlueJTextField()!.setText(colorRangeInterface!.getMinBlue().toString());
    
this.getMaxBlueJTextField()!.setText(colorRangeInterface!.getMaxBlue().toString());
    
this.getColorAtXJTextField()!.setText(this.colorAtActionScriptConditionInterface!.getPoint()!.x.toString());
    
this.getColorAtYJTextField()!.setText(this.colorAtActionScriptConditionInterface!.getPoint()!.y.toString());
    
this.colorAtActionScriptConditionInterface!.log();
    
}


    update(){

    colorRangeInterface: ColorRangeInterface = this.colorAtActionScriptConditionInterface!.getColorRangeInterface()!;;
    
colorRangeInterface!.setMinRed(Integer.valueOf(this.getMinRedJTextField()!.getText())!.intValue());
    
colorRangeInterface!.setMaxRed(Integer.valueOf(this.getMaxRedJTextField()!.getText())!.intValue());
    
colorRangeInterface!.setMinGreen(Integer.valueOf(this.getMinGreenJTextField()!.getText())!.intValue());
    
colorRangeInterface!.setMaxGreen(Integer.valueOf(this.getMaxGreenJTextField()!.getText())!.intValue());
    
colorRangeInterface!.setMinBlue(Integer.valueOf(this.getMinBlueJTextField()!.getText())!.intValue());
    
colorRangeInterface!.setMaxBlue(Integer.valueOf(this.getMaxBlueJTextField()!.getText())!.intValue());
    

    xString: string = this.getColorAtXJTextField()!.getText()!;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(xString) && StringValidationUtil.getInstance()!.isNumber(xString))
                        
                                    {
                                    this.colorAtActionScriptConditionInterface!.getPoint()!.x= Integer.parseInt(xString);
    

                                    }
                                

    yString: string = this.getColorAtYJTextField()!.getText()!;;
    

                        if(!StringValidationUtil.getInstance()!.isEmpty(yString) && StringValidationUtil.getInstance()!.isNumber(yString))
                        
                                    {
                                    this.colorAtActionScriptConditionInterface!.getPoint()!.y= Integer.parseInt(xString);
    

                                    }
                                
this.colorAtActionScriptConditionInterface!.log();
    
}


    public javax.swing.JTextField getColorAtXJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorAtXJTextField;
    
}


    public setColorAtXJTextField(javax.swing.JTextField colorAtXJTextField){
this.colorAtXJTextField= colorAtXJTextField;
    
}


    public javax.swing.JTextField getColorAtYJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorAtYJTextField;
    
}


    public setColorAtYJTextField(javax.swing.JTextField colorAtYJTextField){
this.colorAtYJTextField= colorAtYJTextField;
    
}


    public javax.swing.JTextField getMaxBlueJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxBlueJTextField;
    
}


    public setMaxBlueJTextField(javax.swing.JTextField maxBlueJTextField){
this.maxBlueJTextField= maxBlueJTextField;
    
}


    public javax.swing.JTextField getMaxGreenJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxGreenJTextField;
    
}


    public setMaxGreenJTextField(javax.swing.JTextField maxGreenJTextField){
this.maxGreenJTextField= maxGreenJTextField;
    
}


    public javax.swing.JTextField getMaxRedJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.maxRedJTextField;
    
}


    public setMaxRedJTextField(javax.swing.JTextField maxRedJTextField){
this.maxRedJTextField= maxRedJTextField;
    
}


    public javax.swing.JTextField getMinBlueJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minBlueJTextField;
    
}


    public setMinBlueJTextField(javax.swing.JTextField minBlueJTextField){
this.minBlueJTextField= minBlueJTextField;
    
}


    public javax.swing.JTextField getMinGreenJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minGreenJTextField;
    
}


    public setMinGreenJTextField(javax.swing.JTextField minGreenJTextField){
this.minGreenJTextField= minGreenJTextField;
    
}


    public javax.swing.JTextField getMinRedJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.minRedJTextField;
    
}


    public setMinRedJTextField(javax.swing.JTextField minRedJTextField){
this.minRedJTextField= minRedJTextField;
    
}


    public javax.swing.JLabel getYJLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.yJLabel;
    
}


    public setYJLabel(javax.swing.JLabel yJLabel){
this.yJLabel= yJLabel;
    
}


    public javax.swing.JDialog getColorAtActionJDialog(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.colorAtActionJDialog;
    
}


    public setColorAtActionJDialog(javax.swing.JDialog colorAtActionJDialog){
this.colorAtActionJDialog= colorAtActionJDialog;
    
}


    initComponents(){
this.colorAtActionJDialog= new javax.swing.JDialog();
    
this.titleJLabel= new javax.swing.JLabel();
    
this.locationJLabel= new javax.swing.JLabel();
    
this.colorAtXJTextField= new javax.swing.JTextField();
    
this.xJLabel= new javax.swing.JLabel();
    
this.yJLabel= new javax.swing.JLabel();
    
this.colorAtYJTextField= new javax.swing.JTextField();
    
this.colorRangeJLabel= new javax.swing.JLabel();
    
this.redJLabel= new javax.swing.JLabel();
    
this.minJLabel= new javax.swing.JLabel();
    
this.maxJLabel= new javax.swing.JLabel();
    
this.greenJLabel= new javax.swing.JLabel();
    
this.blueJLabel= new javax.swing.JLabel();
    
this.minRedJTextField= new javax.swing.JTextField();
    
this.maxRedJTextField= new javax.swing.JTextField();
    
this.maxGreenJTextField= new javax.swing.JTextField();
    
this.minBlueJTextField= new javax.swing.JTextField();
    
this.maxBlueJTextField= new javax.swing.JTextField();
    
this.okJButton= new javax.swing.JButton();
    
this.minGreenJTextField= new javax.swing.JTextField();
    
this.colorAtActionJButton= new javax.swing.JButton();
    
this.jLabel1= new javax.swing.JLabel();
    
this.colorAtActionJDialog!.setMinimumSize(new java.awt.Dimension(350, 250));
    
this.titleJLabel!.setText("              Color At Action Options            ");
    
this.locationJLabel!.setText("Location:");
    
this.xJLabel!.setText("X:");
    
this.yJLabel!.setText("Y:");
    
this.colorRangeJLabel!.setText("Color Range");
    
this.redJLabel!.setText("Red:");
    
this.minJLabel!.setText("Minimum");
    
this.maxJLabel!.setText("Maximum");
    
this.greenJLabel!.setText("Green:");
    
this.blueJLabel!.setText("Blue:");
    
this.okJButton!.setText("OK");
    
this.okJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    colorAtActionJDialogLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.colorAtActionJDialog!.getContentPane());;
    
this.colorAtActionJDialog!.getContentPane()!.setLayout(colorAtActionJDialogLayout);
    
colorAtActionJDialogLayout!.setHorizontalGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(colorAtActionJDialogLayout!.createSequentialGroup()!.addContainerGap()!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(colorAtActionJDialogLayout!.createSequentialGroup()!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)!.addComponent(okJButton)!.addGroup(colorAtActionJDialogLayout!.createSequentialGroup()!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)!.addGroup(colorAtActionJDialogLayout!.createSequentialGroup()!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(blueJLabel)!.addComponent(greenJLabel)!.addComponent(redJLabel)!.addComponent(colorRangeJLabel))!.addGap(29, 29, 29))!.addGroup(javax.swing.GroupLayout.Alignment.TRAILING, colorAtActionJDialogLayout!.createSequentialGroup()!.addComponent(locationJLabel)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addComponent(xJLabel)!.addGap(18, 18, 18)))!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(minBlueJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 40, Short.MAX_VALUE)!.addComponent(minGreenJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 40, Short.MAX_VALUE)!.addComponent(minJLabel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addComponent(minRedJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 40, Short.MAX_VALUE)!.addComponent(colorAtXJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 40, Short.MAX_VALUE))!.addGap(16, 16, 16)))!.addGap(6, 6, 6)!.addComponent(yJLabel)!.addGap(24, 24, 24)!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING)!.addComponent(maxJLabel, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)!.addGroup(javax.swing.GroupLayout.Alignment.LEADING, colorAtActionJDialogLayout!.createSequentialGroup()!.addGap(1, 1, 1)!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)!.addComponent(maxBlueJTextField, javax.swing.GroupLayout.Alignment.TRAILING)!.addComponent(maxRedJTextField, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 43, Short.MAX_VALUE)!.addComponent(maxGreenJTextField, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 43, javax.swing.GroupLayout.PREFERRED_SIZE)))!.addComponent(colorAtYJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 44, Short.MAX_VALUE))!.addGap(22, 22, 22))!.addGroup(javax.swing.GroupLayout.Alignment.TRAILING, colorAtActionJDialogLayout!.createSequentialGroup()!.addComponent(titleJLabel)!.addGap(33, 33, 33)))));
    
colorAtActionJDialogLayout!.setVerticalGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(colorAtActionJDialogLayout!.createSequentialGroup()!.addContainerGap()!.addComponent(titleJLabel)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(colorAtActionJDialogLayout!.createSequentialGroup()!.addGap(15, 15, 15)!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(xJLabel)!.addComponent(locationJLabel)!.addComponent(colorAtXJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(yJLabel))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(minJLabel)!.addComponent(colorRangeJLabel))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(minRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addComponent(redJLabel))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(greenJLabel)!.addComponent(minGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(colorAtActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(blueJLabel)!.addComponent(minBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 17, Short.MAX_VALUE)!.addComponent(okJButton))!.addGroup(colorAtActionJDialogLayout!.createSequentialGroup()!.addGap(14, 14, 14)!.addComponent(colorAtYJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(maxJLabel)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(maxRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(maxGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(maxBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))!.addContainerGap()));
    
setPreferredSize(new java.awt.Dimension(100, 0));
    
this.colorAtActionJButton!.setText("Edit");
    
this.colorAtActionJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
colorAtActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.jLabel1!.setText("Color At:");
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(jLabel1)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 15, Short.MAX_VALUE)!.addComponent(colorAtActionJButton)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(jLabel1)!.addComponent(colorAtActionJButton)));
    
}


    okJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.update();
    
this.getColorAtActionJDialog()!.setVisible(false);
    
}


    colorAtActionJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.getColorAtActionJDialog()!.setVisible(true);
    
}


    private: blueJLabel: javax.swing.JLabel;

    private: colorAtActionJButton: javax.swing.JButton;

    private: colorAtActionJDialog: javax.swing.JDialog;

    private: colorAtXJTextField: javax.swing.JTextField;

    private: colorAtYJTextField: javax.swing.JTextField;

    private: colorRangeJLabel: javax.swing.JLabel;

    private: greenJLabel: javax.swing.JLabel;

    private: jLabel1: javax.swing.JLabel;

    private: locationJLabel: javax.swing.JLabel;

    private: maxBlueJTextField: javax.swing.JTextField;

    private: maxGreenJTextField: javax.swing.JTextField;

    private: maxJLabel: javax.swing.JLabel;

    private: maxRedJTextField: javax.swing.JTextField;

    private: minBlueJTextField: javax.swing.JTextField;

    private: minGreenJTextField: javax.swing.JTextField;

    private: minJLabel: javax.swing.JLabel;

    private: minRedJTextField: javax.swing.JTextField;

    private: okJButton: javax.swing.JButton;

    private: redJLabel: javax.swing.JLabel;

    private: titleJLabel: javax.swing.JLabel;

    private: xJLabel: javax.swing.JLabel;

    private: yJLabel: javax.swing.JLabel;

};

            

