
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
        



            #include "../../../java/lang/Exception.h"
        
#include <jsinterop/annotations/JsType.h>

      
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

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsConstructor.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ProceduralAnimationInterfaceFactoryInterface.h"
#include "AnimationInterfaceFactoryInterface.h"
#include "BasicAnimationInterfaceFactoryInterface.h"
#include "NullAnimationFactory.h"

class FeaturedAnimationInterfaceFactoryInterfaceFactory: public FeaturedResourceFactory {

    private: static FeaturedAnimationInterfaceFactoryInterfaceFactory INSTANCE = FeaturedAnimationInterfaceFactoryInterfaceFactory();

    public: static FeaturedAnimationInterfaceFactoryInterfaceFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FeaturedAnimationInterfaceFactoryInterfaceFactory::INSTANCE;
    
}


private: FeaturedAnimationInterfaceFactoryInterfaceFactory(){
}


                //@Throws(Exception.constructor)
            
    public: Rectangle getRectangle(std::string resource){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getRectangleXY(resource, 0, 0);;
    
}


                //@Throws(Exception.constructor)
            
    public: Rectangle getRectangleXY(std::string resource, int32_t x, int32_t y){

    PointFactory pointFactory = PointFactory::getInstance();;
    

    BasicArrayList list = this->getList();;
    

    int32_t scale = GameConfigurationCentral::getInstance().SCALE.getValue().intValue();;
    

    int32_t size = this->getList().size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    FeatureResourceAnimationInterfaceFactoryInterface featureInterface = list.objectArray[index]! as FeatureResourceAnimationInterfaceFactoryInterface;;
    

                        if(featureInterface.isFeature())
                        
                                    {
                                    
    Rectangle rectangle = featureInterface.getRectangle(resource);;
    

                        if(rectangle != RectangleFactory::SINGLETON)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return Rectangle(pointFactory.createXY(x, y), ((rectangle.getWidth() *scale)>>1), ((rectangle.getHeight() *scale)>>1));
    

                                    }
                                

                                    }
                                
}




                            throw Exception(StringMaker().append("No rectangle available for current feature selection or Resource: ").append(resource).toString());
                    
}


                //@Throws(Exception.constructor)
            
    public: ProceduralAnimationInterfaceFactoryInterface getProcedural(std::string resource){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getBasicAnimationInterfaceFactoryInstance(resource) as ProceduralAnimationInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    public: AnimationInterfaceFactoryInterface get(std::string resource){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->getBasicAnimationInterfaceFactoryInstance(resource) as AnimationInterfaceFactoryInterface;
    
}


                //@Throws(Exception.constructor)
            
    private: BasicAnimationInterfaceFactoryInterface getBasicAnimationInterfaceFactoryInstance(std::string resource){

    BasicArrayList list = this->getList();;
    

    BasicArrayList resourceTypeAvailableList = BasicArrayListD();;
    

    int32_t size = this->getList().size();;
    

    FeatureResourceAnimationInterfaceFactoryInterface featureInterface;;
    

    BasicAnimationInterfaceFactoryInterface animationInterfaceFactoryInterface;;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
featureInterface= list.objectArray[index]! as FeatureResourceAnimationInterfaceFactoryInterface;
    

                        if(featureInterface.isFeature())
                        
                                    {
                                    resourceTypeAvailableList.add(featureInterface);
    
animationInterfaceFactoryInterface= featureInterface.getBasicAnimationInterfaceFactoryInstance(resource);
    

                        if(animationInterfaceFactoryInterface != NullAnimationFactory::NULL_NOT_FOR_USE_ANIMATION_FACTORY)
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return animationInterfaceFactoryInterface;
    

                                    }
                                

                                    }
                                
}


                        if(resourceTypeAvailableList.size() > 0)
                        
                                    {
                                    
    std::string NO_ANIMATION_AVAILABLE_FROM = "No animation available from: ";;
    

    std::string FOR_FACTORIES = " factories: ";;
    

    std::string FOR_RESOURCE = " for Resource: ";;
    

    std::string HAS_KEY = " has: ";;
    

    std::string RESOURCES_LABEL = " resources ";;
    

    StringMaker stringBuffer = StringMaker();;
    
stringBuffer.append(NO_ANIMATION_AVAILABLE_FROM);
    
stringBuffer.appendint(resourceTypeAvailableList.size());
    
stringBuffer.append(CommonSeps::getInstance().FORWARD_SLASH);
    
stringBuffer.appendint(size);
    
stringBuffer.append(FOR_FACTORIES);
    

    int32_t size2 = resourceTypeAvailableList.size();;
    




                        for (
    int32_t index = 0;index < size2; index++)
        {
stringBuffer.append(resourceTypeAvailableList.get(index).toString());
    
stringBuffer.append(CommonSeps::getInstance().COMMA_SEP);
    
}

stringBuffer.append(FOR_RESOURCE);
    
stringBuffer.append(resource);
    




                        for (
    int32_t index = 0;index < size; index++)
        {
stringBuffer.append(CommonSeps::getInstance().NEW_LINE);
    
featureInterface= list.objectArray[index]! as FeatureResourceAnimationInterfaceFactoryInterface;
    

                        if(featureInterface.isFeature())
                        
                                    {
                                    stringBuffer.append(StringUtil::getInstance().toString(featureInterface));
    
stringBuffer.append(HAS_KEY);
    
stringBuffer.appendint(featureInterface.getHashtable().size());
    
stringBuffer.append(RESOURCES_LABEL);
    

                                    }
                                
}




                            throw Exception(stringBuffer.toString());
                    

                                    }
                                
                        else {
                            
    StringMaker stringBuffer = StringMaker();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {
featureInterface= list.objectArray[index]! as FeatureResourceAnimationInterfaceFactoryInterface;
    
stringBuffer.append(featureInterface.toString());
    
stringBuffer.append(CommonSeps::getInstance().SPACE);
    
}


    std::string result = stringBuffer.toString();;
    
stringBuffer.delete(0, stringBuffer.length());
    



                            throw Exception(stringBuffer.append("No feature resource type available for Resource: ").append(resource).append(" Resource Factories Available: ").append(result).toString());
                    

                        }
                            
}


};

            

