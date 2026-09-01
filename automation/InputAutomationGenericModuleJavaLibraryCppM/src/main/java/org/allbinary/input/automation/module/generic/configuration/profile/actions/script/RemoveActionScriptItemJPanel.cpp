
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
        



#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileAction.h>

      
#include <org/allbinary/input/automation/module/generic/configuration/profile/actions/GenericProfileActionJPanel.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "Panel.h"
#include "JButton.h"
#include "GridLayout.h"
#include "ActionListener.h"
#include "ActionEvent.h"

class RemoveActionScriptItemJPanel: public java::awt::Panel {

    protected: const LogUtil logUtil = LogUtil::getInstance();

    private: GenericProfileActionJPanel genericProfileActionJPanel;

    private: ProfileActionScriptConditionInterface profileActionScriptConditionInterface;

public: RemoveActionScriptItemJPanel(GenericProfileActionJPanel genericProfileActionJPanel, ProfileActionScriptConditionInterface profileActionScriptConditionInterface){
this->initComponents();
    
this->genericProfileActionJPanel= genericProfileActionJPanel;
    
this->profileActionScriptConditionInterface= profileActionScriptConditionInterface;
    
}


    private: void initComponents(){
this->removeJButton= javax::swing::JButton();
    
setLayout(java::awt::GridLayout());
    
this->removeJButton.setText("Remove");
    
this->removeJButton.addActionListener(class extends java::awt::event::ActionListener
                                {
                                
    public: void actionPerformed(java::awt::event::ActionEvent evt){
removeJButtonActionPerformed(evt);
    
}

                                }
                            );
    
add(this->removeJButton);
    
}


    private: void removeJButtonActionPerformed(java::awt::event::ActionEvent evt){

    GenericProfileAction genericProfileAction = this->genericProfileActionJPanel.getGenericProfileAction();;
    

                        if(genericProfileAction == 
                                    nullptr
                                )
                        
                                    {
                                    this->logUtil.putF("GenericProfileAction was null", this, "removeJButtonActionPerformed");
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
genericProfileAction.getGenericProfileActionScript().removeCondition(this->profileActionScriptConditionInterface);
    
this->genericProfileActionJPanel.updateProfileActionUI();
    
}


    private: javax::swing::JButton removeJButton;

};

            

