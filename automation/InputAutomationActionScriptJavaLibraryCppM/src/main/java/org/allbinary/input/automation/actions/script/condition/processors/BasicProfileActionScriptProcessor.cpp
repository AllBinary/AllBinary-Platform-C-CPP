
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
        



            #include "../../../../../../../../java/lang/Exception.h"
        
#include <java/awt/event/ActionEvent.h>

      
#include <org/allbinary/input/automation/actions/script/JTreeInterfaceFactory.h>

      
#include <org/allbinary/input/automation/actions/script/ProfileActionScriptItem.h>

      
#include <org/allbinary/input/automation/actions/script/condition/ProfileActionScriptConditionInterface.h>

      
#include <org/w3c/dom/Document.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptProcessorInterface.h"
#include "GenericProfileActionScriptProcessorData.h"

class BasicProfileActionScriptProcessor: public ProfileActionScriptItem, public ProfileActionScriptProcessorInterface {

public: BasicProfileActionScriptProcessor(std::string label, Node node){
            super(label, node);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


public: BasicProfileActionScriptProcessor(std::string label){
            super(label);
                    

                            //For kotlin this is before the body of the constructor.
                    
}


    public: void actionPerformed(ActionEvent actionEvent){
super.actionPerformed(actionEvent);
    

                        if(actionEvent.getActionCommand().compareTo(DELETE) == 0)
                        
                                    {
                                    
                        if(this->getParent() instanceof ProfileActionScriptConditionInterface)
                        
                                    {
                                    
    ProfileActionScriptConditionInterface profileActionScriptConditionInterface = this->getParent() as ProfileActionScriptConditionInterface;;
    
profileActionScriptConditionInterface.removeProcessor(this as ProfileActionScriptProcessorInterface);
    
JTreeInterfaceFactory::getInstance().getJTreeInterface().updateJTree();
    

                                    }
                                

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public: Node toXmlNode(Document document){

    Node node = document.createElement(GenericProfileActionScriptProcessorData::NAME);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return node;
    
}


};

            

