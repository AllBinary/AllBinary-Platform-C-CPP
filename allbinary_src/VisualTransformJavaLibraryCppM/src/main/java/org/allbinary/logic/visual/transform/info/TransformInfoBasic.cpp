
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
        



        #ifndef ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_CPP
        #define ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/logic/visual/transform/info/TransformInfoBasic.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <java/util/HashMap.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <javax/servlet/jsp/PageContext.h>

      
#include <org/allbinary/business/context/AbContext.h>

      
#include <org/allbinary/business/context/modules/storefront/StoreFrontInterface.h>

      
#include <org/allbinary/logic/io/path/AbPath.h>

      
#include <org/allbinary/logic/visual/transform/info/objectConfig/TransformInfoObjectConfigInterface.h>

      
#include <org/w3c/dom/Document.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/logic/visual/transform/info/TransformInfoHttpInterface.h"
//Hack class should not exist

TransformInfoBasic::TransformInfoBasic(StoreFrontInterface* storeFrontInterface, HashMap<Object*, Object*>* propertiesHashMap, PageContext* pageContext) : AbContext(propertiesHashMap, pageContext){

                        //super/this constructor call is in the constructor initializer list.
                    

                            //For kotlin this is before the body of the constructor.
                    
this->storeFrontInterface= storeFrontInterface;
    
}


    auto TransformInfoBasic::getStoreName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->storeFrontInterface->getName();;
    
}


    auto TransformInfoBasic::log() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return commonStrings.NOT_IMPLEMENTED;
    
}


    auto TransformInfoBasic::override(HashMap<Object*, Object*>* hashMap) -> void{
}


    auto TransformInfoBasic::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::getObjectFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::getObject() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::getObjectConfigInterface() -> TransformInfoObjectConfigInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::setObjectConfigInterface(TransformInfoObjectConfigInterface* transformInfoObjectConfigInterface) -> void{
}


    auto TransformInfoBasic::getTemplateFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::getTemplateFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::getTemplate() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::getDataFilePath() -> AbPath*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::getDataFile() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoBasic::getDataDocument() -> Document*{



                            throw Exception(commonStrings.NOT_IMPLEMENTED);
                    
}


    auto TransformInfoBasic::setName(std::string value) -> void{
}


    auto TransformInfoBasic::setStoreName(std::string value) -> void{
}


    auto TransformInfoBasic::setObjectFile(std::string value) -> void{
}


    auto TransformInfoBasic::setObject(Object* anyType) -> void{
}


    auto TransformInfoBasic::setObjectConfigFile(std::string value) -> void{
}


    auto TransformInfoBasic::setTemplateFile(std::string value) -> void{
}


    auto TransformInfoBasic::setTemplate(std::string value) -> void{
}


    auto TransformInfoBasic::setDataFile(std::string value) -> void{
}


    auto TransformInfoBasic::setData(std::string value) -> void{
}


    auto TransformInfoBasic::setChild() -> void{
}


    auto TransformInfoBasic::isChild() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    
}


    auto TransformInfoBasic::getImportUriPath() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


    auto TransformInfoBasic::setImportUriPath(std::string importUriPath) -> void{
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoBasic::getKey() -> Object*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoBasic::toVector() -> BasicArrayList*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}


                //@Throws(Exception.constructor)
            
    auto TransformInfoBasic::toHashMap() -> HashMap<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return nullptr;
    
}




        #endif //ORG_ALLBINARY_LOGIC_VISUAL_TRANSFORM_INFO_TRANSFORMINFOBASIC_CPP
