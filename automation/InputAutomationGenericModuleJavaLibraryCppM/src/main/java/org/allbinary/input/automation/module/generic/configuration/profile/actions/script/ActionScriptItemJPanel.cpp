
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
        



















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "JPanel.h"
#include "GridLayout.h"
#include "GroupLayout.h"
#include "Short.h"
#include "Dimension.h"

class ActionScriptItemJPanel: public javax.swing.JPanel {
        

public constructor (){

            super();
        this.initComponents();
    
}


    public javax.swing.JPanel getNewActionScriptInputJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.newActionScriptInputJPanel;
    
}


    public setNewActionScriptInputJPanel(javax.swing.JPanel newActionScriptInputJPanel){
this.newActionScriptInputJPanel= newActionScriptInputJPanel;
    
}


    public javax.swing.JPanel getRemoveJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.removeJPanel;
    
}


    public setRemoveJPanel(javax.swing.JPanel removeJPanel){
this.removeJPanel= removeJPanel;
    
}


    public javax.swing.JPanel getScriptItemJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.scriptItemJPanel;
    
}


    public setScriptItemJPanel(javax.swing.JPanel scriptItemJPanel){
this.scriptItemJPanel= scriptItemJPanel;
    
}


    public javax.swing.JPanel getNewActionScriptConditionJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.newActionScriptConditionJPanel;
    
}


    public setNewActionScriptConditionJPanel(javax.swing.JPanel newActionScriptConditionJPanel){
this.newActionScriptConditionJPanel= newActionScriptConditionJPanel;
    
}


    public javax.swing.JPanel getChildActionScriptConditionJPanel(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.childActionScriptConditionJPanel;
    
}


    public setChildActionScriptConditionJPanel(javax.swing.JPanel childActionScriptConditionJPanel){
this.childActionScriptConditionJPanel= childActionScriptConditionJPanel;
    
}


    initComponents(){
this.newActionScriptInputJPanel= new javax.swing.JPanel();
    
this.childActionScriptConditionJPanel= new javax.swing.JPanel();
    
this.newActionScriptConditionJPanel= new javax.swing.JPanel();
    
this.scriptItemJPanel= new javax.swing.JPanel();
    
this.removeJPanel= new javax.swing.JPanel();
    
this.newActionScriptInputJPanel!.setLayout(new java.awt.GridLayout(1, 0));
    

    childActionScriptConditionJPanelLayout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this.childActionScriptConditionJPanel);;
    
this.childActionScriptConditionJPanel!.setLayout(childActionScriptConditionJPanelLayout);
    
childActionScriptConditionJPanelLayout!.setHorizontalGroup(childActionScriptConditionJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 229, Short.MAX_VALUE));
    
childActionScriptConditionJPanelLayout!.setVerticalGroup(childActionScriptConditionJPanelLayout!.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGap(0, 8, Short.MAX_VALUE));
    
this.newActionScriptConditionJPanel!.setLayout(new java.awt.GridLayout(1, 0));
    
this.scriptItemJPanel!.setLayout(new java.awt.GridLayout(1, 1));
    
this.removeJPanel!.setLayout(new java.awt.GridLayout(1, 1));
    
this.removeJPanel!.setMinimumSize(new java.awt.Dimension(30, 20));
    

    layout: javax.swing.GroupLayout = new javax.swing.GroupLayout(this);;
    
this.setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addComponent(scriptItemJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, 167, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(removeJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, 56, Short.MAX_VALUE))!.addComponent(newActionScriptInputJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, 229, Short.MAX_VALUE)!.addComponent(newActionScriptConditionJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, 229, Short.MAX_VALUE)!.addComponent(childActionScriptConditionJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addGroup(layout.createSequentialGroup()!.addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)!.addComponent(scriptItemJPanel, javax.swing.GroupLayout.DEFAULT_SIZE, 31, Short.MAX_VALUE)!.addComponent(removeJPanel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.DEFAULT_SIZE, 31, Short.MAX_VALUE))!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(childActionScriptConditionJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(newActionScriptConditionJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, 28, javax.swing.GroupLayout.PREFERRED_SIZE)!.addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)!.addComponent(newActionScriptInputJPanel, javax.swing.GroupLayout.PREFERRED_SIZE, 30, javax.swing.GroupLayout.PREFERRED_SIZE)));
    
}


    private: childActionScriptConditionJPanel: javax.swing.JPanel;

    private: newActionScriptConditionJPanel: javax.swing.JPanel;

    private: newActionScriptInputJPanel: javax.swing.JPanel;

    private: removeJPanel: javax.swing.JPanel;

    private: scriptItemJPanel: javax.swing.JPanel;

};

            

