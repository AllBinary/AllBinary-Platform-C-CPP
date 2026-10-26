
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
        



            #include "java/lang/Integer.h"
        
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

class ColorAtActionScriptConditionJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    protected: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: ColorAtActionScriptConditionInterface colorAtActionScriptConditionInterface;

public: ColorAtActionScriptConditionJPanel(ColorAtActionScriptConditionInterface colorAtActionScriptConditionInterface){
this->logUtil.putF(this->commonStrings.START, this, this->commonStrings.CONSTRUCTOR);
    
this->initComponents();
    
this->colorAtActionScriptConditionInterface= colorAtActionScriptConditionInterface;
    
this->set();
    
}


    private: void set(){

    ColorRangeInterface colorRangeInterface = this->colorAtActionScriptConditionInterface.getColorRangeInterface();;
    
this->getMinRedJTextField().setText(std::to_string(getMinRed));
    
this->getMaxRedJTextField().setText(std::to_string(getMaxRed));
    
this->getMinGreenJTextField().setText(std::to_string(getMinGreen));
    
this->getMaxGreenJTextField().setText(std::to_string(getMaxGreen));
    
this->getMinBlueJTextField().setText(std::to_string(getMinBlue));
    
this->getMaxBlueJTextField().setText(std::to_string(getMaxBlue));
    
this->getColorAtXJTextField().setText(std::to_string(x));
    
this->getColorAtYJTextField().setText(std::to_string(y));
    
this->colorAtActionScriptConditionInterface.log();
    
}


    private: void update(){

    ColorRangeInterface colorRangeInterface = this->colorAtActionScriptConditionInterface.getColorRangeInterface();;
    
colorRangeInterface.setMinRed(Integer::valueOf(this->getMinRedJTextField().getText()).intValue());
    
colorRangeInterface.setMaxRed(Integer::valueOf(this->getMaxRedJTextField().getText()).intValue());
    
colorRangeInterface.setMinGreen(Integer::valueOf(this->getMinGreenJTextField().getText()).intValue());
    
colorRangeInterface.setMaxGreen(Integer::valueOf(this->getMaxGreenJTextField().getText()).intValue());
    
colorRangeInterface.setMinBlue(Integer::valueOf(this->getMinBlueJTextField().getText()).intValue());
    
colorRangeInterface.setMaxBlue(Integer::valueOf(this->getMaxBlueJTextField().getText()).intValue());
    

    std::string xString = this->getColorAtXJTextField().getText();;
    

                        if(!StringValidationUtil::getInstance().isEmpty(xString) && StringValidationUtil::getInstance().isNumber(xString))
                        
                                    {
                                    this->colorAtActionScriptConditionInterface.getPoint().x= Integer::parseInt(xString);
    

                                    }
                                

    std::string yString = this->getColorAtYJTextField().getText();;
    

                        if(!StringValidationUtil::getInstance().isEmpty(yString) && StringValidationUtil::getInstance().isNumber(yString))
                        
                                    {
                                    this->colorAtActionScriptConditionInterface.getPoint().y= Integer::parseInt(xString);
    

                                    }
                                
this->colorAtActionScriptConditionInterface.log();
    
}


    public: javax::swing::JTextField getColorAtXJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorAtXJTextField;
    
}


    public: void setColorAtXJTextField(javax::swing::JTextField colorAtXJTextField){
this->colorAtXJTextField= colorAtXJTextField;
    
}


    public: javax::swing::JTextField getColorAtYJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorAtYJTextField;
    
}


    public: void setColorAtYJTextField(javax::swing::JTextField colorAtYJTextField){
this->colorAtYJTextField= colorAtYJTextField;
    
}


    public: javax::swing::JTextField getMaxBlueJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxBlueJTextField;
    
}


    public: void setMaxBlueJTextField(javax::swing::JTextField maxBlueJTextField){
this->maxBlueJTextField= maxBlueJTextField;
    
}


    public: javax::swing::JTextField getMaxGreenJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxGreenJTextField;
    
}


    public: void setMaxGreenJTextField(javax::swing::JTextField maxGreenJTextField){
this->maxGreenJTextField= maxGreenJTextField;
    
}


    public: javax::swing::JTextField getMaxRedJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->maxRedJTextField;
    
}


    public: void setMaxRedJTextField(javax::swing::JTextField maxRedJTextField){
this->maxRedJTextField= maxRedJTextField;
    
}


    public: javax::swing::JTextField getMinBlueJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minBlueJTextField;
    
}


    public: void setMinBlueJTextField(javax::swing::JTextField minBlueJTextField){
this->minBlueJTextField= minBlueJTextField;
    
}


    public: javax::swing::JTextField getMinGreenJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minGreenJTextField;
    
}


    public: void setMinGreenJTextField(javax::swing::JTextField minGreenJTextField){
this->minGreenJTextField= minGreenJTextField;
    
}


    public: javax::swing::JTextField getMinRedJTextField(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->minRedJTextField;
    
}


    public: void setMinRedJTextField(javax::swing::JTextField minRedJTextField){
this->minRedJTextField= minRedJTextField;
    
}


    public: javax::swing::JLabel getYJLabel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->yJLabel;
    
}


    public: void setYJLabel(javax::swing::JLabel yJLabel){
this->yJLabel= yJLabel;
    
}


    public: javax::swing::JDialog getColorAtActionJDialog(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->colorAtActionJDialog;
    
}


    public: void setColorAtActionJDialog(javax::swing::JDialog colorAtActionJDialog){
this->colorAtActionJDialog= colorAtActionJDialog;
    
}


    private: void initComponents(){
this->colorAtActionJDialog= javax::swing::JDialog();
    
this->titleJLabel= javax::swing::JLabel();
    
this->locationJLabel= javax::swing::JLabel();
    
this->colorAtXJTextField= javax::swing::JTextField();
    
this->xJLabel= javax::swing::JLabel();
    
this->yJLabel= javax::swing::JLabel();
    
this->colorAtYJTextField= javax::swing::JTextField();
    
this->colorRangeJLabel= javax::swing::JLabel();
    
this->redJLabel= javax::swing::JLabel();
    
this->minJLabel= javax::swing::JLabel();
    
this->maxJLabel= javax::swing::JLabel();
    
this->greenJLabel= javax::swing::JLabel();
    
this->blueJLabel= javax::swing::JLabel();
    
this->minRedJTextField= javax::swing::JTextField();
    
this->maxRedJTextField= javax::swing::JTextField();
    
this->maxGreenJTextField= javax::swing::JTextField();
    
this->minBlueJTextField= javax::swing::JTextField();
    
this->maxBlueJTextField= javax::swing::JTextField();
    
this->okJButton= javax::swing::JButton();
    
this->minGreenJTextField= javax::swing::JTextField();
    
this->colorAtActionJButton= javax::swing::JButton();
    
this->jLabel1= javax::swing::JLabel();
    
this->colorAtActionJDialog.setMinimumSize(java::awt::Dimension(350, 250));
    
this->titleJLabel.setText("              Color At Action Options            ");
    
this->locationJLabel.setText("Location:");
    
this->xJLabel.setText("X:");
    
this->yJLabel.setText("Y:");
    
this->colorRangeJLabel.setText("Color Range");
    
this->redJLabel.setText("Red:");
    
this->minJLabel.setText("Minimum");
    
this->maxJLabel.setText("Maximum");
    
this->greenJLabel.setText("Green:");
    
this->blueJLabel.setText("Blue:");
    
this->okJButton.setText("OK");
    
this->okJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
okJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout colorAtActionJDialogLayout = javax::swing::GroupLayout(this->colorAtActionJDialog.getContentPane());;
    
this->colorAtActionJDialog.getContentPane().setLayout(colorAtActionJDialogLayout);
    
colorAtActionJDialogLayout.setHorizontalGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(colorAtActionJDialogLayout.createSequentialGroup().addContainerGap().addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(colorAtActionJDialogLayout.createSequentialGroup().addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING).addComponent(okJButton).addGroup(colorAtActionJDialogLayout.createSequentialGroup().addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false).addGroup(colorAtActionJDialogLayout.createSequentialGroup().addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(blueJLabel).addComponent(greenJLabel).addComponent(redJLabel).addComponent(colorRangeJLabel)).addGap(29, 29, 29)).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, colorAtActionJDialogLayout.createSequentialGroup().addComponent(locationJLabel).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addComponent(xJLabel).addGap(18, 18, 18))).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(minBlueJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 40, Short::MAX_VALUE).addComponent(minGreenJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 40, Short::MAX_VALUE).addComponent(minJLabel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addComponent(minRedJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 40, Short::MAX_VALUE).addComponent(colorAtXJTextField, javax.swing.GroupLayout.DEFAULT_SIZE, 40, Short::MAX_VALUE)).addGap(16, 16, 16))).addGap(6, 6, 6).addComponent(yJLabel).addGap(24, 24, 24).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.TRAILING).addComponent(maxJLabel, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE).addGroup(javax.swing.GroupLayout.Alignment.LEADING, colorAtActionJDialogLayout.createSequentialGroup().addGap(1, 1, 1).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false).addComponent(maxBlueJTextField, javax.swing.GroupLayout.Alignment.TRAILING).addComponent(maxRedJTextField, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 43, Short::MAX_VALUE).addComponent(maxGreenJTextField, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, 43, javax.swing.GroupLayout.PREFERRED_SIZE))).addComponent(colorAtYJTextField, javax.swing.GroupLayout.Alignment.LEADING, javax.swing.GroupLayout.DEFAULT_SIZE, 44, Short::MAX_VALUE)).addGap(22, 22, 22)).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, colorAtActionJDialogLayout.createSequentialGroup().addComponent(titleJLabel).addGap(33, 33, 33)))));
    
colorAtActionJDialogLayout.setVerticalGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(colorAtActionJDialogLayout.createSequentialGroup().addContainerGap().addComponent(titleJLabel).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(colorAtActionJDialogLayout.createSequentialGroup().addGap(15, 15, 15).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(xJLabel).addComponent(locationJLabel).addComponent(colorAtXJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(yJLabel)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(minJLabel).addComponent(colorRangeJLabel)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(minRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addComponent(redJLabel)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(greenJLabel).addComponent(minGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(colorAtActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(blueJLabel).addComponent(minBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 17, Short::MAX_VALUE).addComponent(okJButton)).addGroup(colorAtActionJDialogLayout.createSequentialGroup().addGap(14, 14, 14).addComponent(colorAtYJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(maxJLabel).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(maxRedJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(maxGreenJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(maxBlueJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE))).addContainerGap()));
    
setPreferredSize(java::awt::Dimension(100, 0));
    
this->colorAtActionJButton.setText("Edit");
    
this->colorAtActionJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
colorAtActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel1.setText("Color At:");
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(jLabel1).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 15, Short::MAX_VALUE).addComponent(colorAtActionJButton)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(jLabel1).addComponent(colorAtActionJButton)));
    
}


    private: void okJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->update();
    
this->getColorAtActionJDialog().setVisible(false);
    
}


    private: void colorAtActionJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->getColorAtActionJDialog().setVisible(true);
    
}


    private: javax::swing::JLabel blueJLabel;

    private: javax::swing::JButton colorAtActionJButton;

    private: javax::swing::JDialog colorAtActionJDialog;

    private: javax::swing::JTextField colorAtXJTextField;

    private: javax::swing::JTextField colorAtYJTextField;

    private: javax::swing::JLabel colorRangeJLabel;

    private: javax::swing::JLabel greenJLabel;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel locationJLabel;

    private: javax::swing::JTextField maxBlueJTextField;

    private: javax::swing::JTextField maxGreenJTextField;

    private: javax::swing::JLabel maxJLabel;

    private: javax::swing::JTextField maxRedJTextField;

    private: javax::swing::JTextField minBlueJTextField;

    private: javax::swing::JTextField minGreenJTextField;

    private: javax::swing::JLabel minJLabel;

    private: javax::swing::JTextField minRedJTextField;

    private: javax::swing::JButton okJButton;

    private: javax::swing::JLabel redJLabel;

    private: javax::swing::JLabel titleJLabel;

    private: javax::swing::JLabel xJLabel;

    private: javax::swing::JLabel yJLabel;

};

            

