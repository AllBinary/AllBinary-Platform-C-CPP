
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
        



        #ifndef ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP
        #define ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP

        #ifndef JAVA_COMPLETE_TYPES
        #define JAVA_COMPLETE_TYPES
        #endif
        
        #include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
        

            #include <cstdint>
            #include <memory>
            #include <string>
            #include "java/lang/String.h"

        
            #include "java/lang/Exception.h"
        
#include <org/allbinary/animation/resource/FeatureResourceAnimationInterfaceFactoryInterface.h>

      
#include <org/allbinary/game/configuration/GameConfigurationCentral.h>

      
#include <org/allbinary/game/resource/FeaturedResourceFactory.h>

      
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/Rectangle.h>

      
#include <org/allbinary/graphics/RectangleFactory.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/logic/string/StringUtil.h>

      
#include <org/allbinary/string/CommonSeps.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"

auto FeaturedAnimationInterfaceFactoryInterfaceFactory::INSTANCE_owner() -> FeaturedAnimationInterfaceFactoryInterfaceFactory* { static std::unique_ptr<FeaturedAnimationInterfaceFactoryInterfaceFactory> value(new FeaturedAnimationInterfaceFactoryInterfaceFactory()); return value.get(); }
FeaturedAnimationInterfaceFactoryInterfaceFactory* FeaturedAnimationInterfaceFactoryInterfaceFactory::INSTANCE = FeaturedAnimationInterfaceFactoryInterfaceFactory::INSTANCE_owner();

FeaturedAnimationInterfaceFactoryInterfaceFactory::FeaturedAnimationInterfaceFactoryInterfaceFactory(){
}


    auto FeaturedAnimationInterfaceFactoryInterfaceFactory::getInstance() -> FeaturedAnimationInterfaceFactoryInterfaceFactory*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return FeaturedAnimationInterfaceFactoryInterfaceFactory::INSTANCE;
    
}


                //@Throws(Exception.constructor)
            
    auto FeaturedAnimationInterfaceFactoryInterfaceFactory::getRectangle(std::string resource) -> Rectangle*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return this->getRectangleXY(resource, 0, 0);;
    
}


                //@Throws(Exception.constructor)
            
    auto FeaturedAnimationInterfaceFactoryInterfaceFactory::getRectangleXY(std::string resource, int32_t x, int32_t y) -> Rectangle*{

    PointFactory* pointFactory = PointFactory::getInstance();;
    

    BasicArrayList* list = this->getList();;
    

    int32_t scale = JavaBoxes::value<int32_t>(GameConfigurationCentral::getInstance()->SCALE->getValue());;
    

    int32_t size = this->getList()->size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    FeatureResourceAnimationInterfaceFactoryInterface* featureInterface = dynamic_cast<FeatureResourceAnimationInterfaceFactoryInterface*>(list->objectArray[index]);;
    

                        if(featureInterface->isFeature())
                        
                                    {
                                    
    Rectangle* rectangle = featureInterface->getRectangle(resource);;
    

                        if(rectangle != RectangleFactory::SINGLETON)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return new Rectangle(pointFactory->createXY(x, y), ((rectangle->getWidth() *scale)>>1), ((rectangle->getHeight() *scale)>>1));
    

                                    }
                                

                                    }
                                
}




                            throw Exception(JavaString::valueOf((new StringMaker())->append("No rectangle available for current feature selection or Resource: ")->append(resource)));
                    
}


                //@Throws(Exception.constructor)
            
    auto FeaturedAnimationInterfaceFactoryInterfaceFactory::getProcedural(std::string resource) -> ProceduralAnimationInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<ProceduralAnimationInterfaceFactoryInterface*>(this->getBasicAnimationInterfaceFactoryInstance(resource));
    
}


                //@Throws(Exception.constructor)
            
    auto FeaturedAnimationInterfaceFactoryInterfaceFactory::get(std::string resource) -> AnimationInterfaceFactoryInterface*{



                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return dynamic_cast<AnimationInterfaceFactoryInterface*>(this->getBasicAnimationInterfaceFactoryInstance(resource));
    
}


                //@Throws(Exception.constructor)
            
    auto FeaturedAnimationInterfaceFactoryInterfaceFactory::getBasicAnimationInterfaceFactoryInstance(std::string resource) -> BasicAnimationInterfaceFactoryInterface*{

    BasicArrayList* list = this->getList();;
    

    BasicArrayList* resourceTypeAvailableList = new BasicArrayListD();;
    

    int32_t size = this->getList()->size();;
    

    FeatureResourceAnimationInterfaceFactoryInterface* featureInterface;;
    

    BasicAnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
featureInterface= dynamic_cast<FeatureResourceAnimationInterfaceFactoryInterface*>(list->objectArray[index]);
    

                        if(featureInterface->isFeature())
                        
                                    {
                                    resourceTypeAvailableList->add(featureInterface);
    
animationInterfaceFactoryInterface= featureInterface->getBasicAnimationInterfaceFactoryInstance(resource);
    

                        if(animationInterfaceFactoryInterface != NullAnimationFactory::NULL_NOT_FOR_USE_ANIMATION_FACTORY)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        
                        
                        return animationInterfaceFactoryInterface;
    

                                    }
                                

                                    }
                                
}


                        if(resourceTypeAvailableList->size() > 0)
                        
                                    {
                                    
    std::string NO_ANIMATION_AVAILABLE_FROM = "No animation available from: ";;
    

    std::string FOR_FACTORIES = " factories: ";;
    

    std::string FOR_RESOURCE = " for Resource: ";;
    

    std::string HAS_KEY = " has: ";;
    

    std::string RESOURCES_LABEL = " resources ";;
    

    StringMaker* stringBuffer = new StringMaker();;
    
stringBuffer->append(NO_ANIMATION_AVAILABLE_FROM);
    
stringBuffer->appendint(resourceTypeAvailableList->size());
    
stringBuffer->append(CommonSeps::getInstance()->FORWARD_SLASH);
    
stringBuffer->appendint(size);
    
stringBuffer->append(FOR_FACTORIES);
    

    int32_t size2 = resourceTypeAvailableList->size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
stringBuffer->append(JavaString::valueOf(resourceTypeAvailableList->get(index)));
    
stringBuffer->append(CommonSeps::getInstance()->COMMA_SEP);
    
}

stringBuffer->append(FOR_RESOURCE);
    
stringBuffer->append(resource);
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuffer->append(CommonSeps::getInstance()->NEW_LINE);
    
featureInterface= dynamic_cast<FeatureResourceAnimationInterfaceFactoryInterface*>(list->objectArray[index]);
    

                        if(featureInterface->isFeature())
                        
                                    {
                                    stringBuffer->append(StringUtil::getInstance()->toString(featureInterface));
    
stringBuffer->append(HAS_KEY);
    
stringBuffer->appendint(featureInterface->getHashtable()->size());
    
stringBuffer->append(RESOURCES_LABEL);
    

                                    }
                                
}




                            throw Exception(JavaString::valueOf(stringBuffer));
                    

                                    }
                                
                        else {
                            
    StringMaker* stringBuffer = new StringMaker();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
featureInterface= dynamic_cast<FeatureResourceAnimationInterfaceFactoryInterface*>(list->objectArray[index]);
    
stringBuffer->append(JavaString::valueOf(featureInterface));
    
stringBuffer->append(CommonSeps::getInstance()->SPACE);
    
}


    std::string result = JavaString::valueOf(stringBuffer);;
    
stringBuffer->delete_(0, stringBuffer->length());
    



                            throw Exception(JavaString::valueOf(stringBuffer->append("No feature resource type available for Resource: ")->append(resource)->append(" Resource Factories Available: ")->append(result)));
                    

                        }
                            
}




        #endif //ORG_ALLBINARY_ANIMATION_FEATUREDANIMATIONINTERFACEFACTORYINTERFACEFACTORY_CPP
