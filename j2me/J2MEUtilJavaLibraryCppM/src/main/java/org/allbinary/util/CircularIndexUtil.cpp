
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
        



        #ifndef ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_CPP
        #define ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/util/CircularIndexUtil.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonLabels.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
auto CircularIndexUtil::NULL_CIRCULAR_INDEX_UTIL_owner() -> CircularIndexUtil* { static std::unique_ptr<CircularIndexUtil> value(new CircularIndexUtil(0, 0)); return value.get(); }
CircularIndexUtil* CircularIndexUtil::NULL_CIRCULAR_INDEX_UTIL = CircularIndexUtil::NULL_CIRCULAR_INDEX_UTIL_owner();

CircularIndexUtil::CircularIndexUtil(int32_t index, int32_t size){
this->setSize(size);
    
this->setIndex(index);
    
}


    auto CircularIndexUtil::next() -> int32_t{

                        if(this->index >= this->lastIndex)
                        
                                    {
                                    this->index= 0;
    

                                    }
                                
                        else {
                            this->index++;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->index;
    
}


    auto CircularIndexUtil::previous() -> int32_t{

                        if(this->index < 1)
                        
                                    {
                                    this->index= this->lastIndex;
    

                                    }
                                
                        else {
                            this->index--;
    

                        }
                            



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->index;
    
}


    auto CircularIndexUtil::setIndex(int32_t index) -> void{

                        if(index > this->lastIndex)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return ;
    

                                    }
                                
this->index= index;
    
}


    auto CircularIndexUtil::getIndex() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->index;
    
}


    auto CircularIndexUtil::createInstance(int32_t max) -> CircularIndexUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CircularIndexUtil(0, max);
    
}


    auto CircularIndexUtil::createInstanceAt(int32_t index, int32_t max) -> CircularIndexUtil*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return new CircularIndexUtil(index, max);
    
}


    auto CircularIndexUtil::setSize(int32_t size) -> void{
this->size= size;
    
this->lastIndex= size -1;
    
this->index= 0;
    
}


    auto CircularIndexUtil::getSize() -> int32_t{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->size;
    
}


    auto CircularIndexUtil::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(CommonLabels::getInstance()->INDEX_LABEL)->appendint(this->index)->append("lastIndex: ")->appendint(this->lastIndex)->append("size: ")->appendint(this->size)->toString();;
    
}




        #endif //ORG_ALLBINARY_UTIL_CIRCULARINDEXUTIL_CPP
