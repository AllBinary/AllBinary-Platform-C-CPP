
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
        



        #ifndef ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_CPP
        #define ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/identification/CompositeGroup.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/identification/GroupCommonFactory.h"


CompositeGroup::CompositeGroup(Group* groupInterface) : logUtil(LogUtil::getInstance()), list(new BasicArrayListD()){
this->groupInterface= groupInterface;
    
}


    auto CompositeGroup::clear() -> void{
this->list->clear();
    
}


    auto CompositeGroup::add(Group* groupInterface) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    

    GroupCommonFactory* groupCommonFactory = GroupCommonFactory::getInstance();;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(groupCommonFactory->ADDING_LABEL);
    
stringBuffer->append(groupInterface->toString());
    
stringBuffer->append(groupCommonFactory->TO_LABEL);
    
stringBuffer->append(StringUtil::getInstance()->toString(this->groupInterface));
    
this->logUtil->putF(stringBuffer->toString(), this, commonStrings->ADD);
    
this->list->add(groupInterface);
    
}


    auto CompositeGroup::isInGroup(Group* groupInterface) -> bool{

                        if(this->list->contains(groupInterface))
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    auto CompositeGroup::getGroup() -> Group*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->groupInterface;
    
}




        #endif //ORG_ALLBINARY_GAME_IDENTIFICATION_COMPOSITEGROUP_CPP
