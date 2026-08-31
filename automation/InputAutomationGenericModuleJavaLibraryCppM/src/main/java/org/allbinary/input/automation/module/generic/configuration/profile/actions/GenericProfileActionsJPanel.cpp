
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

class GenericProfileActionsJPanel: public javax.swing.JPanel {
        

    const logUtil: LogUtil = LogUtil.getInstance()!;

    private: const commonStrings: CommonStrings = CommonStrings.getInstance()!;

    private: genericProfileActions: GenericProfileActions;

    private: genericProfileActionJPanel: GenericProfileActionJPanel;

public constructor (){

            super();
        this.initComponents();
    
}


    initComponents(){
this.newProfileActionJDialog= new javax.swing.JDialog();
    
this.newProfileActionJLabel= new javax.swing.JLabel();
    
this.okNewProfileActionJButton= new javax.swing.JButton();
    
this.newProfileActionJTextField= new javax.swing.JTextField();
    
this.genericProfileActionsJPanel= new javax.swing.JPanel();
    
this.genericProfileActionsJScrollPane= new javax.swing.JScrollPane();
    
this.genericProfileActionsJList= new javax.swing.JList();
    
this.newActionJButton= new javax.swing.JButton();
    
this.deleteActionJButton= new javax.swing.JButton();
    
this.saveJButton= new javax.swing.JButton();
    
this.blankGenericProfileActionJPanel= new javax.swing.JPanel();
    
this.newProfileActionJDialog!.setMinimumSize(new java.awt.Dimension(250, 150));
    
this.newProfileActionJDialog!.setResizable(false);
    
this.newProfileActionJLabel!.setText("New Action Name");
    
this.okNewProfileActionJButton!.setText("Ok");
    
this.okNewProfileActionJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
okNewProfileActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    

    newProfileActionJDialogLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.newProfileActionJDialog!.getContentPane());;
    
this.newProfileActionJDialog!.getContentPane()!.setLayout(newProfileActionJDialogLayout);
    
newProfileActionJDialogLayout!.setHorizontalGroup(newProfileActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(newProfileActionJDialogLayout!.createSequentialGroup()!.addGroup(newProfileActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(newProfileActionJDialogLayout!.createSequentialGroup()!.addGap(93, 93, 93)!.addComponent(okNewProfileActionJButton))!.addGroup(newProfileActionJDialogLayout!.createSequentialGroup()!.addGap(75, 75, 75)!.addComponent(newProfileActionJLabel))!.addGroup(newProfileActionJDialogLayout!.createSequentialGroup()!.addGap(29, 29, 29)!.addComponent(newProfileActionJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, 178, javax.swing.GroupLayout.PREFERRED_SIZE)))!.addContainerGap(34, Short.MAX_VALUE)));
    
newProfileActionJDialogLayout!.setVerticalGroup(newProfileActionJDialogLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(javax.swing.GroupLayout.Alignment.TRAILING, newProfileActionJDialogLayout!.createSequentialGroup()!.addContainerGap()!.addComponent(newProfileActionJLabel)!.addGap(21, 21, 21)!.addComponent(newProfileActionJTextField, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED, 20, Short.MAX_VALUE)!.addComponent(okNewProfileActionJButton)!.addContainerGap()));
    
this.genericProfileActionsJPanel!.setPreferredSize(new java.awt.Dimension(10000, 10000));
    
this.genericProfileActionsJList!.addListSelectionListener(new class extends javax.swing.event.ListSelectionListener
                                {
                                
    public valueChanged(javax.swing.event.ListSelectionEvent evt){
genericProfileActionsJListValueChanged(evt);
    
}

                                }
                            );
    
this.genericProfileActionsJScrollPane!.setViewportView(this.genericProfileActionsJList);
    
this.newActionJButton!.setText("New");
    
this.newActionJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
newActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.deleteActionJButton!.setText("Delete");
    
this.deleteActionJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
deleteActionJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.saveJButton!.setText("Save");
    
this.saveJButton!.addActionListener(new class extends java.awt.event.ActionListener
                                {
                                
    public actionPerformed(java.awt.event.ActionEvent evt){
saveJButtonActionPerformed(evt);
    
}

                                }
                            );
    
this.blankGenericProfileActionJPanel!.setMinimumSize(new java.awt.Dimension(500, 300));
    

    blankGenericProfileActionJPanelLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.blankGenericProfileActionJPanel);;
    
this.blankGenericProfileActionJPanel!.setLayout(blankGenericProfileActionJPanelLayout);
    
blankGenericProfileActionJPanelLayout!.setHorizontalGroup(blankGenericProfileActionJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 500, Short.MAX_VALUE));
    
blankGenericProfileActionJPanelLayout!.setVerticalGroup(blankGenericProfileActionJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 296, Short.MAX_VALUE));
    

    genericProfileActionsJPanelLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.genericProfileActionsJPanel);;
    
this.genericProfileActionsJPanel!.setLayout(genericProfileActionsJPanelLayout);
    
genericProfileActionsJPanelLayout!.setHorizontalGroup(genericProfileActionsJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(genericProfileActionsJPanelLayout!.createSequentialGroup()!.addComponent(genericProfileActionsJScrollPane, javax.swing.GroupLayout.PREFERRED_SIZE, 95, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(blankGenericProfileActionJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))!.addGroup(genericProfileActionsJPanelLayout!.createSequentialGroup()!.addComponent(newActionJButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(deleteActionJButton)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(saveJButton)!.addContainerGap()));
    
genericProfileActionsJPanelLayout!.setVerticalGroup(genericProfileActionsJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(genericProfileActionsJPanelLayout!.createSequentialGroup()!.addGroup(genericProfileActionsJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.BASELINE)!.addComponent(newActionJButton)!.addComponent(deleteActionJButton)!.addComponent(saveJButton))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addGroup(genericProfileActionsJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)!.addComponent(blankGenericProfileActionJPanel, 0, 296, Short.MAX_VALUE)!.addComponent(genericProfileActionsJScrollPane, javax.swing.GroupLayout.DEFAULT_SIZE, 296, Short.MAX_VALUE))!.addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(genericProfileActionsJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, 596, javax.swing.GroupLayout.PREFERRED_SIZE)!.addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(genericProfileActionsJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, 336, javax.swing.GroupLayout.PREFERRED_SIZE));
    
}


    public setModel(){

    defaultListModelHelper: DefaultListModelHelper = this.getGenericProfileActions()!.getDefaultListModelHelper()!;;
    

                        if(defaultListModelHelper!.getListModel()!.getSize() > 0)
                        
                                    {
                                    this.genericProfileActionsJList!.setModel(defaultListModelHelper!.getListModel());
    

                                    }
                                
}


    saveJButtonActionPerformed(java.awt.event.ActionEvent evt){

        try {
            this.getGenericProfileActions()!.save();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "saveJButtonActionPerformed", e);
    
}

}


    updateProfileActionUI(string profileActionNameString){
this.blankGenericProfileActionJPanel!.removeAll();
    

                        if(profileActionNameString != 
                                    null
                                )
                        
                                    {
                                    
    genericProfileAction: GenericProfileAction = this.getGenericProfileActions()!.getAction(profileActionNameString)!;;
    
this.setGenericProfileActionJPanel(new GenericProfileActionJPanel());
    
this.getGenericProfileActionJPanel()!.setGenericProfileAction(genericProfileAction);
    
this.getGenericProfileActionJPanel()!.updateProfileActionUI();
    

    layout: javax.swing.GroupLayout = this.blankGenericProfileActionJPanel!.getLayout() as javax.swing.GroupLayout;;
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 395, Short.MAX_VALUE)!.addComponent(this.getGenericProfileActionJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 256, Short.MAX_VALUE)!.addComponent(this.getGenericProfileActionJPanel(), javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE));
    
this.logUtil!.putF("Setting Configuration Profile Actions JPanel", this, "genericProfileActionsJListValueChanged");
    

                                    }
                                
}


    genericProfileActionsJListValueChanged(javax.swing.event.ListSelectionEvent evt){

        try {
            
    profileActionNameString: string = this.genericProfileActionsJList!.getSelectedValue() as string;;
    
this.updateProfileActionUI(profileActionNameString);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "genericProfileActionsJListValueChanged", e);
    
}

}


    okNewProfileActionJButtonActionPerformed(java.awt.event.ActionEvent evt){

        try {
            
    newActionName: string = this.newProfileActionJTextField!.getText()!;;
    
this.getGenericProfileActions()!.add(newActionName);
    
this.setModel();
    
this.genericProfileActionsJList!.setSelectedValue(newActionName, true);
    
this.newProfileActionJDialog!.setVisible(false);
    
this.updateProfileActionUI(newActionName);
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "okNewProfileActionJButtonActionPerformed", e);
    
}

}


    deleteActionJButtonActionPerformed(java.awt.event.ActionEvent evt){

        try {
            
    anyType: std::vector<any> = this.genericProfileActionsJList!.getSelectedValues()!;;
    




                        for (
    index: int32_t = 0;index < anyType!.length; index++)
        {

    nextSelectedValueString: string = anyType[index]! as string;;
    
this.getGenericProfileActions()!.remove(nextSelectedValueString);
    
}

this.selectFirstElement();
    

                //: 
} catch(e) 
            {
this.logUtil!.put(this.commonStrings!.EXCEPTION, this, "deleteActionJButtonActionPerformed", e);
    
}

}


                //@Throws(Exception.constructor)
            
    public selectFirstElement(){
this.setModel();
    

                        if(this.genericProfileActionsJList!.getModel()!.getSize() > 0)
                        
                                    {
                                    this.genericProfileActionsJList!.setSelectedValue(this.genericProfileActionsJList!.getModel()!.getElementAt(0), true);
    
this.updateProfileActionUI(this.genericProfileActionsJList!.getModel()!.getElementAt(0) as string);
    

                                    }
                                
                        else {
                            this.blankGenericProfileActionJPanel!.removeAll();
    
this.blankGenericProfileActionJPanel!.repaint();
    

                        }
                            
}


    public GenericProfileActionJPanel getGenericProfileActionJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericProfileActionJPanel;
    
}


    public setGenericProfileActionJPanel(GenericProfileActionJPanel genericProfileActionJPanel){
this.genericProfileActionJPanel= genericProfileActionJPanel;
    
}


    public GenericProfileActions getGenericProfileActions(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.genericProfileActions;
    
}


    public setGenericProfileActions(GenericProfileActions genericProfileActions){
this.genericProfileActions= genericProfileActions;
    
}


    newActionJButtonActionPerformed(java.awt.event.ActionEvent evt){
this.newProfileActionJDialog!.setVisible(true);
    
}


    private: blankGenericProfileActionJPanel: javax.swing.JPanel;

    private: deleteActionJButton: javax.swing.JButton;

    private: genericProfileActionsJList: javax.swing.JList;

    private: genericProfileActionsJPanel: javax.swing.JPanel;

    private: genericProfileActionsJScrollPane: javax.swing.JScrollPane;

    private: newActionJButton: javax.swing.JButton;

    private: newProfileActionJDialog: javax.swing.JDialog;

    private: newProfileActionJLabel: javax.swing.JLabel;

    private: newProfileActionJTextField: javax.swing.JTextField;

    private: okNewProfileActionJButton: javax.swing.JButton;

    private: saveJButton: javax.swing.JButton;

};

            

