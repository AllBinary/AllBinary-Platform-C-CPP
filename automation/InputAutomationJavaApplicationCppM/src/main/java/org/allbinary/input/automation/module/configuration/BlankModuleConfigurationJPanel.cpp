
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
#include "JLabel.h"
#include "GroupLayout.h"
#include "Short.h"

class BlankModuleConfigurationJPanel: public javax::swing::JPanel {

public: BlankModuleConfigurationJPanel(){
this->initComponents();
    
}


    private: void initComponents(){
this->jLabel1= javax::swing::JLabel();
    
this->jLabel1.setText("No Configuration Available");
    

    javax::swing::GroupLayout layout = javax::swing::GroupLayout(this);;
    
this->setLayout(layout);
    
layout.setHorizontalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup().addContainerGap(231, Short::MAX_VALUE).addComponent(jLabel1).addGap(225, 225, 225)));
    
layout.setVerticalGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING).addGroup(layout.createSequentialGroup().addContainerGap().addComponent(jLabel1).addContainerGap(362, Short::MAX_VALUE)));
    
}


    private: javax::swing::JLabel jLabel1;

};

            

