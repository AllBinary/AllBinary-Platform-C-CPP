
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
        



            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/data/tree/dom/DomSearchHelper.h>

      
#include <org/w3c/dom/Node.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProfileActionScriptInputInterface.h"
#include "KeyboardActionScriptInputData.h"
#include "MouseActionScriptInputData.h"
#include "MouseActionScriptInput.h"
#include "KeyboardActionScriptInput.h"

class ProfileActionScriptInputFactory
            : public Object
         {

                //@Throws(Exception.constructor)
            
    public: static ProfileActionScriptInputInterface getInstance(Node node){

    ProfileActionScriptInputInterface profileActionScriptInputInterface = 
                null
            ;;
    

                        if(DomSearchHelper::getNodeNoThrow(KeyboardActionScriptInputData::NAME, node.getChildNodes()) != 
                                    nullptr
                                )
                        
                                    {
                                    profileActionScriptInputInterface= KeyboardActionScriptInput(node);
    

                                    }
                                
                             else 
                        if(DomSearchHelper::getNodeNoThrow(MouseActionScriptInputData::NAME, node.getChildNodes()) != 
                                    nullptr
                                )
                        
                                    {
                                    profileActionScriptInputInterface= MouseActionScriptInput(node);
    

                                    }
                                
                        else {
                            


                            throw Exception("No Such ActionScript Input");
                    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return profileActionScriptInputInterface;
    
}


private: ProfileActionScriptInputFactory(){
}


};

            

