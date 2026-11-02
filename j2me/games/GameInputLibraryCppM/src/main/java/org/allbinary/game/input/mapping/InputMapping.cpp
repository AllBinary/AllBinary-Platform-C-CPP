
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
        



        #ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_CPP
        #define ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/game/input/mapping/InputMapping.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/game/input/Input.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/logic/StdUtil.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"


InputMapping::InputMapping() : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()), hashtable(StdUtil::getInstance()->createHashtable()), mappedList(new BasicArrayListD()){
}


    auto InputMapping::getTotalMapped() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable->size();;
    
}


    auto InputMapping::isDefaultNew() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    auto InputMapping::getDefault() -> InputToGameKeyMapping*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return InputToGameKeyMapping::getNullInstance();;
    
}


    auto InputMapping::removeAll() -> void{
this->hashtable->clear();
    
this->mappedList->clear();
    
}


    auto InputMapping::remove(Input* input, Input* mappedToInput) -> void{

    StringMaker* stringBuffer = new StringMaker();;
    

    StringUtil* stringUtil = StringUtil::getInstance();;
    
stringBuffer->append(CommonLabels::getInstance()->START_LABEL);
    
stringBuffer->append(stringUtil->toString(input));
    
stringBuffer->append(" == ");
    
stringBuffer->append(stringUtil->toString(mappedToInput));
    
this->logUtil->putF(stringBuffer->toString(), this, "InputMapping::remove");
    

    BasicArrayList* list = this->getMappedInput(input);;
    

                        if(list->contains(mappedToInput))
                        
                                    {
                                    list->remove(mappedToInput);
    
this->mappedList->remove(mappedToInput);
    
stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Removed: ");
    
stringBuffer->append(stringUtil->toString(input));
    
stringBuffer->append(" == ");
    
stringBuffer->append(stringUtil->toString(mappedToInput));
    
this->logUtil->putF(stringBuffer->toString(), this, "InputMapping::remove");
    

                                    }
                                
                        else {
                            stringBuffer->delete_(0, stringBuffer->length());
    
stringBuffer->append("Not Deleted: ");
    
stringBuffer->append(stringUtil->toString(input));
    
stringBuffer->append(" == ");
    
stringBuffer->append(stringUtil->toString(mappedToInput));
    
this->logUtil->putF(stringBuffer->toString(), this, "InputMapping::remove");
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto InputMapping::addMapping(InputToGameKeyMapping* inputToGameKeyMapping) -> void{



                            throw Exception(this->commonStrings->NOT_IMPLEMENTED);
                    
}


    auto InputMapping::add(Input* input, Input* mappedToInput) -> void{

    BasicArrayList* list = this->getMappedInput(input);;
    

                        if(!list->contains(mappedToInput))
                        
                                    {
                                    list->add(mappedToInput);
    
this->mappedList->add(mappedToInput);
    

                                    }
                                
}


    auto InputMapping::isMapped(Input* input) -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->mappedList->contains(input);;
    
}


    auto InputMapping::getMappedInput(Input* id) -> BasicArrayList*{

    Object* mappingInputCanBeNullList = JavaBoxes::toObject(this->hashtable->get(id));;
    

                        if(mappingInputCanBeNullList == 
                                    nullptr
                                )
                        
                                    {
                                    
    BasicArrayList* list = new BasicArrayListD();;
    
this->hashtable->put(id, list);
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return dynamic_cast<BasicArrayList*>(mappingInputCanBeNullList);
    
}


    auto InputMapping::getHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}




        #endif //ORG_ALLBINARY_GAME_INPUT_MAPPING_INPUTMAPPING_CPP
