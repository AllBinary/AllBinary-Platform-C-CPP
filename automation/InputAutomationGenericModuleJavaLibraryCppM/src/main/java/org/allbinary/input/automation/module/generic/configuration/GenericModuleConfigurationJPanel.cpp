
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
        
            #include "../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfile.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfileDataWorkerType.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/GenericProfiles.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActions.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionsJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GenericModuleConfigurationInterface.h"
#include "JDialog.h"
#include "JButton.h"
#include "JLabel.h"
#include "JTextField.h"
#include "ButtonGroup.h"
#include "JTabbedPane.h"
#include "JScrollPane.h"
#include "JList.h"
#include "JRadioButton.h"
#include "JCheckBox.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "GridLayout.h"
#include "ListSelectionListener.h"
#include "ListSelectionEvent.h"
#include "Insets.h"

class GenericModuleConfigurationJPanel: public javax::swing::JPanel, public GenericModuleConfigurationInterface {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const StringUtil stringUtil = StringUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: GenericProfiles genericProfiles;

    private: GenericProfile selectedGenericProfile;

public: GenericModuleConfigurationJPanel(){
this->initComponents();
    
this->setGenericProfiles(GenericProfiles(GenericProfiles::DEFAULT_FILE));
    
this->selectFirstElement();
    
}


    private: void initComponents(){
this->newProfileJDialog= javax::swing::JDialog();
    
this->okNewProfileJButton= javax::swing::JButton();
    
this->newProfileNameJLabel= javax::swing::JLabel();
    
this->newProfileNameJTextField= javax::swing::JTextField();
    
this->buttonGroup2= javax::swing::ButtonGroup();
    
this->genericJTabbedPane= javax::swing::JTabbedPane();
    
this->genericProfilesJPanel= javax::swing::JPanel();
    
this->genericProfilesJScrollPane= javax::swing::JScrollPane();
    
this->genericProfilesJList= javax::swing::JList();
    
this->newProfileJButton= javax::swing::JButton();
    
this->deleteProfileJButton= javax::swing::JButton();
    
this->jPanel1= javax::swing::JPanel();
    
this->screenCaptureJRadioButton= javax::swing::JRadioButton();
    
this->jLabel1= javax::swing::JLabel();
    
this->jLabel2= javax::swing::JLabel();
    
this->savedCaptureJRadioButton= javax::swing::JRadioButton();
    
this->captureMotionAnalysisJCheckBox= javax::swing::JCheckBox();
    
this->captureComparisonJCheckBox= javax::swing::JCheckBox();
    
this->jLabel3= javax::swing::JLabel();
    
this->blankGenericProfileActionsJPanel= javax::swing::JPanel();
    
this->newProfileJDialog.setMinimumSize(java::awt::Dimension(250, 150));
    
this->newProfileJDialog.setResizable(false);
    
this->okNewProfileJButton.setText("Ok");
    
this->okNewProfileJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
okNewProfileJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->newProfileNameJLabel.setText("New Profile Name");
    

    javax::swing::GroupLayout newProfileJDialogLayout = javax::swing::GroupLayout(this->newProfileJDialog.getContentPane());;
    
this->newProfileJDialog.getContentPane().setLayout(newProfileJDialogLayout);
    
newProfileJDialogLayout.setHorizontalGroup(newProfileJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(newProfileJDialogLayout.createSequentialGroup().addGroup(newProfileJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(newProfileJDialogLayout.createSequentialGroup().addGap(80, 80, 80).addComponent(newProfileNameJLabel)).addGroup(newProfileJDialogLayout.createSequentialGroup().addGap(30, 30, 30).addComponent(newProfileNameJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 180, javax.swing.GroupLayout.PREFERRED_SIZE)).addGroup(newProfileJDialogLayout.createSequentialGroup().addGap(100, 100, 100).addComponent(okNewProfileJButton))).addContainerGap(35, Short::MAX_VALUE)));
    
newProfileJDialogLayout.setVerticalGroup(newProfileJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(newProfileJDialogLayout.createSequentialGroup().addGap(10, 10, 10).addComponent(newProfileNameJLabel).addGap(16, 16, 16).addComponent(newProfileNameJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addGap(20, 20, 20).addComponent(okNewProfileJButton)));
    
setLayout(java::awt::GridLayout(1, 0));
    
setMinimumSize(java::awt::Dimension(400, 300));
    
setPreferredSize(java::awt::Dimension(700, 700));
    
this->genericJTabbedPane.setToolTipText(this->stringUtil.EMPTY_STRING);
    
this->genericJTabbedPane.setMinimumSize(java::awt::Dimension(800, 600));
    
this->genericProfilesJPanel.setMinimumSize(java::awt::Dimension(400, 300));
    
this->genericProfilesJPanel.setPreferredSize(java::awt::Dimension(0, 0));
    
this->genericProfilesJList.addListSelectionListener(class extends javax::swing::event::ListSelectionListener
                                {
                                
    public: void valueChanged(javax::swing::event::ListSelectionEvent evt){
genericProfilesJListValueChanged(evt);
    
}

                                }
                            );
    
this->genericProfilesJScrollPane.setViewportView(this->genericProfilesJList);
    
this->newProfileJButton.setText("New");
    
this->newProfileJButton.setToolTipText("Creates a new profile");
    
this->newProfileJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
newProfileJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->deleteProfileJButton.setText("Delete");
    
this->deleteProfileJButton.setToolTipText("Deletes the selected profile");
    
this->deleteProfileJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
deleteProfileJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jPanel1.setPreferredSize(java::awt::Dimension(1000, 100));
    
this->screenCaptureJRadioButton.setText("Screen Captures");
    
this->screenCaptureJRadioButton.setToolTipText("Records the screen into memory for logical processing");
    
this->screenCaptureJRadioButton.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->screenCaptureJRadioButton.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->screenCaptureJRadioButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
screenCaptureJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel1.setText("Profile Options");
    
this->jLabel2.setText("Process From:");
    
this->savedCaptureJRadioButton.setText("Saved Images");
    
this->savedCaptureJRadioButton.setToolTipText("Loads images from files for logical processing.  Usually for debugging your profile actions");
    
this->savedCaptureJRadioButton.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->savedCaptureJRadioButton.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->savedCaptureJRadioButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
savedCaptureJRadioButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->captureMotionAnalysisJCheckBox.setText("Motion Analysis");
    
this->captureMotionAnalysisJCheckBox.setToolTipText("Uses image comparison and contraints to locate moving objects");
    
this->captureMotionAnalysisJCheckBox.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->captureMotionAnalysisJCheckBox.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->captureMotionAnalysisJCheckBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
captureMotionAnalysisJCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->captureComparisonJCheckBox.setText("Comparison");
    
this->captureComparisonJCheckBox.setToolTipText("Compares the last two input images for multi image logic");
    
this->captureComparisonJCheckBox.setBorder(javax.swing.BorderFactory.createEmptyBorder(0, 0, 0, 0));
    
this->captureComparisonJCheckBox.setMargin(java::awt::Insets(0, 0, 0, 0));
    
this->captureComparisonJCheckBox.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
captureComparisonJCheckBoxActionPerformed(evt);
    
}

                                }
                            );
    
this->jLabel3.setText("Image Processing:");
    
this->jLabel3.setToolTipText("Turns on/off various extended image processing");
    

    javax::swing::GroupLayout jPanel1Layout = javax::swing::GroupLayout(this->jPanel1);;
    
this->jPanel1.setLayout(jPanel1Layout);
    
jPanel1Layout.setHorizontalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel1Layout.createSequentialGroup().addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(screenCaptureJRadioButton).addComponent(jLabel1).addComponent(jLabel2).addComponent(savedCaptureJRadioButton).addComponent(captureMotionAnalysisJCheckBox).addComponent(captureComparisonJCheckBox).addComponent(jLabel3)).addContainerGap(22, Short::MAX_VALUE)));
    
jPanel1Layout.setVerticalGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(jPanel1Layout.createSequentialGroup().addComponent(jLabel1).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel2).addGap(7, 7, 7).addComponent(screenCaptureJRadioButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(savedCaptureJRadioButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jLabel3).addGap(7, 7, 7).addComponent(captureComparisonJCheckBox).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(captureMotionAnalysisJCheckBox).addContainerGap(106, Short::MAX_VALUE)));
    

    javax::swing::GroupLayout genericProfilesJPanelLayout = javax::swing::GroupLayout(this->genericProfilesJPanel);;
    
this->genericProfilesJPanel.setLayout(genericProfilesJPanelLayout);
    
genericProfilesJPanelLayout.setHorizontalGroup(genericProfilesJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(genericProfilesJPanelLayout.createSequentialGroup().addGroup(genericProfilesJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(genericProfilesJPanelLayout.createSequentialGroup().addComponent(newProfileJButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(deleteProfileJButton)).addGroup(genericProfilesJPanelLayout.createSequentialGroup().addComponent(genericProfilesJScrollPane, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 119, Short::MAX_VALUE))).addContainerGap()));
    
genericProfilesJPanelLayout.setVerticalGroup(genericProfilesJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(genericProfilesJPanelLayout.createSequentialGroup().addGroup(genericProfilesJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(newProfileJButton).addComponent(deleteProfileJButton)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(genericProfilesJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, 246, Short::MAX_VALUE).addComponent(genericProfilesJScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 246, Short::MAX_VALUE))));
    
this->genericJTabbedPane.addTab("Profiles", genericProfilesJPanel);
    

    javax::swing::GroupLayout blankGenericProfileActionsJPanelLayout = javax::swing::GroupLayout(this->blankGenericProfileActionsJPanel);;
    
this->blankGenericProfileActionsJPanel.setLayout(blankGenericProfileActionsJPanelLayout);
    
blankGenericProfileActionsJPanelLayout.setHorizontalGroup(blankGenericProfileActionsJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 395, Short::MAX_VALUE));
    
blankGenericProfileActionsJPanelLayout.setVerticalGroup(blankGenericProfileActionsJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 275, Short::MAX_VALUE));
    
this->genericJTabbedPane.addTab("Actions", blankGenericProfileActionsJPanel);
    
add(this->genericJTabbedPane);
    
}


    private: void savedCaptureJRadioButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
                        if(this->savedCaptureJRadioButton.isSelected())
                        
                                    {
                                    this->logUtil.putF("Selected", this, "savedCaptureJRadioButtonActionPerformed");
    
this->getSelectedGenericProfile().add(GenericProfileDataWorkerType::SAVED_CAPTURE);
    
this->getSelectedGenericProfile().remove(GenericProfileDataWorkerType::SCREEN_CAPTURE);
    
this->screenCaptureJRadioButton.setSelected(false);
    
this->getGenericProfiles().save();
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "savedCaptureJRadioButtonActionPerformed", e);
    
}

}


    private: void screenCaptureJRadioButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
                        if(this->screenCaptureJRadioButton.isSelected())
                        
                                    {
                                    this->logUtil.putF("Selected", this, "screenCaptureJRadioButtonActionPerformed");
    
this->getSelectedGenericProfile().add(GenericProfileDataWorkerType::SCREEN_CAPTURE);
    
this->getSelectedGenericProfile().remove(GenericProfileDataWorkerType::SAVED_CAPTURE);
    
this->savedCaptureJRadioButton.setSelected(false);
    
this->getGenericProfiles().save();
    

                                    }
                                

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "screenCaptureJRadioButtonActionPerformed", e);
    
}

}


    private: void captureMotionAnalysisJCheckBoxActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
                        if(this->captureMotionAnalysisJCheckBox.isSelected())
                        
                                    {
                                    this->getSelectedGenericProfile().add(GenericProfileDataWorkerType::MOTION);
    

                                    }
                                
                        else {
                            this->getSelectedGenericProfile().remove(GenericProfileDataWorkerType::MOTION);
    

                        }
                            
this->getGenericProfiles().save();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "captureComparisonJCheckBoxActionPerformed", e);
    
}

}


    private: void captureComparisonJCheckBoxActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
                        if(this->captureComparisonJCheckBox.isSelected())
                        
                                    {
                                    this->getSelectedGenericProfile().add(GenericProfileDataWorkerType::COMPARISON);
    

                                    }
                                
                        else {
                            this->getSelectedGenericProfile().remove(GenericProfileDataWorkerType::COMPARISON);
    

                        }
                            
this->getGenericProfiles().save();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "captureComparisonJCheckBoxActionPerformed", e);
    
}

}


                //@Throws(Exception.constructor)
            
    private: void updateProfileUI(std::string profileNameString){
this->getBlankGenericProfileActionsJPanel().removeAll();
    

                        if(true)
                        
                                    {
                                    
    GenericProfileActionsJPanel genericProfileActionsJPanel = GenericProfileActionsJPanel();;
    
this->setSelectedGenericProfile(this->getGenericProfiles().get(profileNameString));
    
this->getSelectedGenericProfile().setGenericProfileActions(GenericProfileActions(genericProfileActionsJPanel, profileNameString));
    
genericProfileActionsJPanel.setGenericProfileActions(this->getSelectedGenericProfile().getGenericProfileActions());
    
genericProfileActionsJPanel.selectFirstElement();
    

    javax::swing::GroupLayout layout = this->getBlankGenericProfileActionsJPanel().getLayout() as javax::swing::GroupLayout;;
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 395, Short::MAX_VALUE).addComponent(genericProfileActionsJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 256, Short::MAX_VALUE).addComponent(genericProfileActionsJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
this->updateProfileOptions();
    
this->logUtil.putF("Setting Configuration Profile JPanel", this, "updateProfileUI");
    

                                    }
                                
                        else {
                            this->logUtil.putF("Null Configuration Profile", this, "updateProfileUI");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    private: void selectFirstElement(){
this->genericProfilesJList.setModel(this->getGenericProfiles().getDefaultListModelHelper().getListModel());
    

                        if(this->genericProfilesJList.getModel().getSize() > 0)
                        
                                    {
                                    this->genericProfilesJList.setSelectedValue(this->genericProfilesJList.getModel().getElementAt(0), true);
    
this->updateProfileUI(this->genericProfilesJList.getModel().getElementAt(0) as string);
    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    private: void updateProfileOptions(){
this->logUtil.putF(this->commonStrings.START, this, "updateProfileOptions");
    

    GenericProfile genericProfile = this->getSelectedGenericProfile();;
    

    BasicArrayList vector = genericProfile.getGenericProfileDataWorkerTypeVector();;
    
this->screenCaptureJRadioButton.setSelected(false);
    
this->savedCaptureJRadioButton.setSelected(false);
    
this->captureComparisonJCheckBox.setSelected(false);
    
this->captureMotionAnalysisJCheckBox.setSelected(false);
    

    int32_t size = vector.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    GenericProfileDataWorkerType genericProfileDataWorkerType = vector.get(index) as GenericProfileDataWorkerType;;
    
this->logUtil.putF(genericProfile.getName() +" has GenericProfileDataWorkerType: " +genericProfileDataWorkerType.toString(), this, "updateProfileOptions");
    

                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::SCREEN_CAPTURE)
                        
                                    {
                                    this->logUtil.putF("Screen Capture Selected", this, "updateProfileOptions");
    
this->screenCaptureJRadioButton.setSelected(true);
    

                                    }
                                
                             else 
                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::SAVED_CAPTURE)
                        
                                    {
                                    this->logUtil.putF("Saved Capture Selected", this, "updateProfileOptions");
    
this->savedCaptureJRadioButton.setSelected(true);
    

                                    }
                                
                             else 
                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::COMPARISON)
                        
                                    {
                                    this->logUtil.putF("Checking Comparison Box", this, "updateProfileOptions");
    
this->captureComparisonJCheckBox.setSelected(true);
    

                                    }
                                
                             else 
                        if(genericProfileDataWorkerType == GenericProfileDataWorkerType::MOTION)
                        
                                    {
                                    this->logUtil.putF("Checking Motion Box", this, "updateProfileOptions");
    
this->captureMotionAnalysisJCheckBox.setSelected(true);
    

                                    }
                                
}


                        if(!this->screenCaptureJRadioButton.isSelected() && !this->savedCaptureJRadioButton.isSelected())
                        
                                    {
                                    this->screenCaptureJRadioButton.setSelected(true);
    
this->getSelectedGenericProfile().add(GenericProfileDataWorkerType::SCREEN_CAPTURE);
    

                                    }
                                
this->logUtil.putF(this->commonStrings.END, this, "updateProfileOptions");
    
}


    public: javax::swing::JPanel getBlankGenericProfileActionsJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->blankGenericProfileActionsJPanel;
    
}


    public: void setBlankGenericProfileActionsJPanel(javax::swing::JPanel blankGenericProfileActionsJPanel){
this->blankGenericProfileActionsJPanel= blankGenericProfileActionsJPanel;
    
}


    private: GenericProfiles getGenericProfiles(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfiles;
    
}


    private: void setGenericProfiles(GenericProfiles genericProfiles){
this->genericProfiles= genericProfiles;
    
}


    public: GenericProfile getSelectedGenericProfile(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->selectedGenericProfile;
    
}


    public: void setSelectedGenericProfile(GenericProfile selectedGenericProfile){
this->selectedGenericProfile= selectedGenericProfile;
    
}


    private: void genericProfilesJListValueChanged(javax::swing::event::ListSelectionEvent evt){

        try {
            
    std::string profileNameString = this->genericProfilesJList.getSelectedValue() as string;;
    
this->updateProfileUI(profileNameString);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "genericProfilesJListValueChanged", e);
    
}

}


    private: void deleteProfileJButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
    std::vector<Object*> anyType = this->genericProfilesJList.getSelectedValues();;
    




                        for (
    int32_t index = 0;index < anyType.size(); index++)
        {

    std::string nextSelectedValueString = anyType[index]! as string;;
    
this->getGenericProfiles().remove(nextSelectedValueString);
    
}

this->selectFirstElement();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "deleteProfileJButtonActionPerformed", e);
    
}

}


    private: void okNewProfileJButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
    std::string newProfileName = this->newProfileNameJTextField.getText();;
    
this->getGenericProfiles().add(newProfileName);
    
this->genericProfilesJList.setModel(this->getGenericProfiles().getDefaultListModelHelper().getListModel());
    
this->genericProfilesJList.setSelectedValue(newProfileName, true);
    
this->newProfileJDialog.setVisible(false);
    
this->updateProfileUI(newProfileName);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "okNewProfileJButtonActionPerformed", e);
    
}

}


    private: void newProfileJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->newProfileJDialog.setVisible(true);
    
}


    private: javax::swing::JPanel blankGenericProfileActionsJPanel;

    private: javax::swing::ButtonGroup buttonGroup2;

    private: javax::swing::JCheckBox captureComparisonJCheckBox;

    private: javax::swing::JCheckBox captureMotionAnalysisJCheckBox;

    private: javax::swing::JButton deleteProfileJButton;

    private: javax::swing::JTabbedPane genericJTabbedPane;

    private: javax::swing::JList genericProfilesJList;

    private: javax::swing::JPanel genericProfilesJPanel;

    private: javax::swing::JScrollPane genericProfilesJScrollPane;

    private: javax::swing::JLabel jLabel1;

    private: javax::swing::JLabel jLabel2;

    private: javax::swing::JLabel jLabel3;

    private: javax::swing::JPanel jPanel1;

    private: javax::swing::JButton newProfileJButton;

    private: javax::swing::JDialog newProfileJDialog;

    private: javax::swing::JLabel newProfileNameJLabel;

    private: javax::swing::JTextField newProfileNameJTextField;

    private: javax::swing::JButton okNewProfileJButton;

    private: javax::swing::JRadioButton savedCaptureJRadioButton;

    private: javax::swing::JRadioButton screenCaptureJRadioButton;

};

            

