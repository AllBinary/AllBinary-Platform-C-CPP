
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
        
            #include "../../../../../../../../../java/lang/Exception.h"
        
#include <org/allbinary/input/automation/module/DefaultListModelHelper.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GenericProfileActions.h"
#include "GenericProfileActionJPanel.h"
#include "JDialog.h"
#include "JLabel.h"
#include "JButton.h"
#include "JTextField.h"
#include "JScrollPane.h"
#include "JList.h"
#include "Dimension.h"
#include "ActionListener.h"
#include "ActionEvent.h"
#include "GroupLayout.h"
#include "Short.h"
#include "ListSelectionListener.h"
#include "ListSelectionEvent.h"
#include "GenericProfileAction.h"

class GenericProfileActionsJPanel: public javax::swing::JPanel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: const CommonStrings commonStrings = CommonStrings::getInstance();

    private: GenericProfileActions genericProfileActions;

    private: GenericProfileActionJPanel genericProfileActionJPanel;

public: GenericProfileActionsJPanel(){
this->initComponents();
    
}


    private: void initComponents(){
this->newProfileActionJDialog= javax::swing::JDialog();
    
this->newProfileActionJLabel= javax::swing::JLabel();
    
this->okNewProfileActionJButton= javax::swing::JButton();
    
this->newProfileActionJTextField= javax::swing::JTextField();
    
this->genericProfileActionsJPanel= javax::swing::JPanel();
    
this->genericProfileActionsJScrollPane= javax::swing::JScrollPane();
    
this->genericProfileActionsJList= javax::swing::JList();
    
this->newActionJButton= javax::swing::JButton();
    
this->deleteActionJButton= javax::swing::JButton();
    
this->saveJButton= javax::swing::JButton();
    
this->blankGenericProfileActionJPanel= javax::swing::JPanel();
    
this->newProfileActionJDialog.setMinimumSize(java::awt::Dimension(250, 150));
    
this->newProfileActionJDialog.setResizable(false);
    
this->newProfileActionJLabel.setText("New Action Name");
    
this->okNewProfileActionJButton.setText("Ok");
    
this->okNewProfileActionJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
okNewProfileActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    javax::swing::GroupLayout newProfileActionJDialogLayout = javax::swing::GroupLayout(this->newProfileActionJDialog.getContentPane());;
    
this->newProfileActionJDialog.getContentPane().setLayout(newProfileActionJDialogLayout);
    
newProfileActionJDialogLayout.setHorizontalGroup(newProfileActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(newProfileActionJDialogLayout.createSequentialGroup().addGroup(newProfileActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(newProfileActionJDialogLayout.createSequentialGroup().addGap(93, 93, 93).addComponent(okNewProfileActionJButton)).addGroup(newProfileActionJDialogLayout.createSequentialGroup().addGap(75, 75, 75).addComponent(newProfileActionJLabel)).addGroup(newProfileActionJDialogLayout.createSequentialGroup().addGap(29, 29, 29).addComponent(newProfileActionJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 178, javax.swing.GroupLayout.PREFERRED_SIZE))).addContainerGap(34, Short::MAX_VALUE)));
    
newProfileActionJDialogLayout.setVerticalGroup(newProfileActionJDialogLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, newProfileActionJDialogLayout.createSequentialGroup().addContainerGap().addComponent(newProfileActionJLabel).addGap(21, 21, 21).addComponent(newProfileActionJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 20, Short::MAX_VALUE).addComponent(okNewProfileActionJButton).addContainerGap()));
    
this->genericProfileActionsJPanel.setPreferredSize(java::awt::Dimension(10000, 10000));
    
this->genericProfileActionsJList.addListSelectionListener(class extends javax::swing::event::ListSelectionListener
                                {
                                
    public: void valueChanged(javax::swing::event::ListSelectionEvent evt){
genericProfileActionsJListValueChanged(evt);
    
}

                                }
                            );
    
this->genericProfileActionsJScrollPane.setViewportView(this->genericProfileActionsJList);
    
this->newActionJButton.setText("New");
    
this->newActionJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
newActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->deleteActionJButton.setText("Delete");
    
this->deleteActionJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
deleteActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->saveJButton.setText("Save");
    
this->saveJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
saveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this->blankGenericProfileActionJPanel.setMinimumSize(java::awt::Dimension(500, 300));
    

    javax::swing::GroupLayout blankGenericProfileActionJPanelLayout = javax::swing::GroupLayout(this->blankGenericProfileActionJPanel);;
    
this->blankGenericProfileActionJPanel.setLayout(blankGenericProfileActionJPanelLayout);
    
blankGenericProfileActionJPanelLayout.setHorizontalGroup(blankGenericProfileActionJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 500, Short::MAX_VALUE));
    
blankGenericProfileActionJPanelLayout.setVerticalGroup(blankGenericProfileActionJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 296, Short::MAX_VALUE));
    

    javax::swing::GroupLayout genericProfileActionsJPanelLayout = javax::swing::GroupLayout(this->genericProfileActionsJPanel);;
    
this->genericProfileActionsJPanel.setLayout(genericProfileActionsJPanelLayout);
    
genericProfileActionsJPanelLayout.setHorizontalGroup(genericProfileActionsJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(genericProfileActionsJPanelLayout.createSequentialGroup().addComponent(genericProfileActionsJScrollPane, javax.swing.GroupLayout.PREFERRED_SIZE, 95, javax.swing.GroupLayout.PREFERRED_SIZE).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(blankGenericProfileActionJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)).addGroup(genericProfileActionsJPanelLayout.createSequentialGroup().addComponent(newActionJButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(deleteActionJButton).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addComponent(saveJButton).addContainerGap()));
    
genericProfileActionsJPanelLayout.setVerticalGroup(genericProfileActionsJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(genericProfileActionsJPanelLayout.createSequentialGroup().addGroup(genericProfileActionsJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE).addComponent(newActionJButton).addComponent(deleteActionJButton).addComponent(saveJButton)).addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED).addGroup(genericProfileActionsJPanelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false).addComponent(blankGenericProfileActionJPanel, 0, 296, Short::MAX_VALUE).addComponent(genericProfileActionsJScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 296, Short::MAX_VALUE)).addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addComponent(genericProfileActionsJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, 596, javax.swing.GroupLayout.PREFERRED_SIZE).addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short::MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addComponent(genericProfileActionsJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, 336, javax.swing.GroupLayout.PREFERRED_SIZE));
    
}


    public: void setModel(){

    DefaultListModelHelper defaultListModelHelper = this->getGenericProfileActions().getDefaultListModelHelper();;
    

                        if(defaultListModelHelper.getListModel().getSize() > 0)
                        
                                    {
                                    this->genericProfileActionsJList.setModel(defaultListModelHelper.getListModel());
    

                                    }
                                
}


    private: void saveJButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            this->getGenericProfileActions().save();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "saveJButtonActionPerformed", e);
    
}

}


    private: void updateProfileActionUI(std::string profileActionNameString){
this->blankGenericProfileActionJPanel.removeAll();
    

                        if(true)
                        
                                    {
                                    
    GenericProfileAction genericProfileAction = this->getGenericProfileActions().getAction(profileActionNameString);;
    
this->setGenericProfileActionJPanel(GenericProfileActionJPanel());
    
this->getGenericProfileActionJPanel().setGenericProfileAction(genericProfileAction);
    
this->getGenericProfileActionJPanel().updateProfileActionUI();
    

    javax::swing::GroupLayout layout = this->blankGenericProfileActionJPanel.getLayout() as javax::swing::GroupLayout;;
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 395, Short::MAX_VALUE).addComponent(this->getGenericProfileActionJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGap(0, 256, Short::MAX_VALUE).addComponent(this->getGenericProfileActionJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
this->logUtil.putF("Setting Configuration Profile Actions JPanel", this, "genericProfileActionsJListValueChanged");
    

                                    }
                                
}


    private: void genericProfileActionsJListValueChanged(javax::swing::event::ListSelectionEvent evt){

        try {
            
    std::string profileActionNameString = this->genericProfileActionsJList.getSelectedValue() as string;;
    
this->updateProfileActionUI(profileActionNameString);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "genericProfileActionsJListValueChanged", e);
    
}

}


    private: void okNewProfileActionJButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
    std::string newActionName = this->newProfileActionJTextField.getText();;
    
this->getGenericProfileActions().add(newActionName);
    
this->setModel();
    
this->genericProfileActionsJList.setSelectedValue(newActionName, true);
    
this->newProfileActionJDialog.setVisible(false);
    
this->updateProfileActionUI(newActionName);
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "okNewProfileActionJButtonActionPerformed", e);
    
}

}


    private: void deleteActionJButtonActionPerformed(java::awt::event::ActionEvent evt){

        try {
            
    std::vector<Object*> anyType = this->genericProfileActionsJList.getSelectedValues();;
    




                        for (
    int32_t index = 0;index < anyType.size(); index++)
        {

    std::string nextSelectedValueString = anyType[index]! as string;;
    
this->getGenericProfileActions().remove(nextSelectedValueString);
    
}

this->selectFirstElement();
    

                //: 
} catch(e) 
            {
this->logUtil.put(this->commonStrings.EXCEPTION, this, "deleteActionJButtonActionPerformed", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public: void selectFirstElement(){
this->setModel();
    

                        if(this->genericProfileActionsJList.getModel().getSize() > 0)
                        
                                    {
                                    this->genericProfileActionsJList.setSelectedValue(this->genericProfileActionsJList.getModel().getElementAt(0), true);
    
this->updateProfileActionUI(this->genericProfileActionsJList.getModel().getElementAt(0) as string);
    

                                    }
                                
                        else {
                            this->blankGenericProfileActionJPanel.removeAll();
    
this->blankGenericProfileActionJPanel.repaint();
    

                        }
                            
}


    public: GenericProfileActionJPanel getGenericProfileActionJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActionJPanel;
    
}


    public: void setGenericProfileActionJPanel(GenericProfileActionJPanel genericProfileActionJPanel){
this->genericProfileActionJPanel= genericProfileActionJPanel;
    
}


    public: GenericProfileActions getGenericProfileActions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->genericProfileActions;
    
}


    public: void setGenericProfileActions(GenericProfileActions genericProfileActions){
this->genericProfileActions= genericProfileActions;
    
}


    private: void newActionJButtonActionPerformed(java::awt::event::ActionEvent evt){
this->newProfileActionJDialog.setVisible(true);
    
}


    private: javax::swing::JPanel blankGenericProfileActionJPanel;

    private: javax::swing::JButton deleteActionJButton;

    private: javax::swing::JList genericProfileActionsJList;

    private: javax::swing::JPanel genericProfileActionsJPanel;

    private: javax::swing::JScrollPane genericProfileActionsJScrollPane;

    private: javax::swing::JButton newActionJButton;

    private: javax::swing::JDialog newProfileActionJDialog;

    private: javax::swing::JLabel newProfileActionJLabel;

    private: javax::swing::JTextField newProfileActionJTextField;

    private: javax::swing::JButton okNewProfileActionJButton;

    private: javax::swing::JButton saveJButton;

};

            

