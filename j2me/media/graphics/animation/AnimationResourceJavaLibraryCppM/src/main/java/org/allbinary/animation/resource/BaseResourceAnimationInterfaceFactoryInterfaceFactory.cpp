
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h"
        

            #include <vector>
        
            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Object.h"
        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/animation/NullAnimationFactory.h>

      
#include <org/allbinary/game/resource/ResourceLoadingLevelFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/image/ImageCache.h>

      
#include <org/allbinary/logic/communication/log/LogUtil.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/string/CommonStrings.h>

      
#include <org/allbinary/util/ABHashtable.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h"


BaseResourceAnimationInterfaceFactoryInterfaceFactory::BaseResourceAnimationInterfaceFactoryInterfaceFactory(std::string name, ABHashtable<Object*, Object*>* hashtable, ABHashtable<Object*, Object*>* rectangleHashtable, ABHashtable<Object*, Object*>* rectangleArrayHashtable) : logUtil(LogUtil::getInstance()), commonStrings(CommonStrings::getInstance()){
this->hashtable= hashtable;
    
this->rectangleHashtable= rectangleHashtable;
    
this->rectangleArrayOfArraysHashtable= rectangleArrayHashtable;
    
this->name= name;
    
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::getName() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->name;
    
}


                //@Throws(Exception.constructor)
            
    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::init(int32_t level) -> void{

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF((new StringMaker())->append("Available List of Animations: ")->append(this->hashtable->toString())->toString(), this, commonStrings->INIT);
    
this->setInitialized(true);
    
}


                //@Throws(Exception.constructor)
            
    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::initImageCache(ImageCache* imageCache, int32_t level) -> void{
}


                //@Throws(Exception.constructor)
            
    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::add(std::string resource, BasicAnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface) -> void{

                        if(this->hashtable->containsKey(resource))
                        
                                    {
                                    


                            throw Exception((new StringMaker())->append("Resource Already Created: ")->append(resource)->toString());
                    

                                    }
                                
this->hashtable->put(resource, animationInterfaceFactoryInterface);
    
}


                //@Throws(Exception.constructor)
            
    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::getBasicAnimationInterfaceFactoryInstance(std::string resource) -> BasicAnimationInterfaceFactoryInterface*{

    Object* basicAnimationInterfaceFactoryInterfaceCanBeNull = JavaBoxes::toObject(this->hashtable->get(resource));;
    

                        if(basicAnimationInterfaceFactoryInterfaceCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return NullAnimationFactory::NULL_NOT_FOR_USE_ANIMATION_FACTORY;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<BasicAnimationInterfaceFactoryInterface*>(basicAnimationInterfaceFactoryInterfaceCanBeNull);
    
}


                //@Throws(Exception.constructor)
            
    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::getRectangle(std::string resource) -> Rectangle*{

    Object* rectangleCanBeNull = JavaBoxes::toObject(this->rectangleHashtable->get(resource));;
    

                        if(rectangleCanBeNull == 
                                    nullptr
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RectangleFactory::SINGLETON;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<Rectangle*>(rectangleCanBeNull);
    
}


                //@Throws(Exception.constructor)
            
    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::addRectangle(std::string resource, Rectangle* rectangle) -> void{
this->rectangleHashtable->put(resource, rectangle);
    
}


                //@Throws(Exception.constructor)
            
    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::getRectangleArrayOfArrays(std::string resource) -> std::vector<std::vector<Rectangle*>>{

    Object* valueCanBeNull = JavaBoxes::toObject(this->rectangleArrayOfArraysHashtable->get(resource));;
    

                        if(valueCanBeNull != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::vector<std::vector<Rectangle*>> rectangleArrayOfArrays = JavaBoxes::unbox<std::vector<std::vector<Rectangle*>>>(valueCanBeNull);;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return rectangleArrayOfArrays;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return RectangleFactory::ARRAY_OF_ARRAYS;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::addRectangleArrayOfArrays(std::string resource, std::vector<std::vector<Rectangle*>> rectangleArrayOfArrays) -> void{
this->rectangleArrayOfArraysHashtable->put(resource, rectangleArrayOfArrays);
    
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::isFeature() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::isLoadingLevel(int32_t level) -> bool{

    ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(level == resourceLoadingLevelFactory->LOAD_ALL->getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return false;
    

                        }
                            
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::toString() -> std::string{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return (new StringMaker())->append(this->getClass()->getName())->append(CommonSeps::getInstance()->SEMICOLON)->append(CommonSeps::getInstance()->SPACE)->append(this->name)->toString();;
    
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::getHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->hashtable;
    
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::getRectangleHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rectangleHashtable;
    
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::getRectangleArrayOfArraysHashtable() -> ABHashtable<Object*, Object*>*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->rectangleArrayOfArraysHashtable;
    
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::setInitialized(bool initialized) -> void{
this->initialized= initialized;
    
}


    auto BaseResourceAnimationInterfaceFactoryInterfaceFactory::isInitialized() -> bool{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->initialized;
    
}




        #endif //ORG_ALLBINARY_ANIMATION_RESOURCE_BASERESOURCEANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP
