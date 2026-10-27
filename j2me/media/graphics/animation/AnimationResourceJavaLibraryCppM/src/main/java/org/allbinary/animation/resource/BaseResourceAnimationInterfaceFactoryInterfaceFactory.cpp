
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

class BaseResourceAnimationInterfaceFactoryInterfaceFactory
            : public Object
        , public FeatureResourceAnimationInterfaceFactoryInterface {

    protected: LogUtil* logUtil = LogUtil::getInstance();

    protected: CommonStrings* commonStrings = CommonStrings::getInstance();

    private: ABHashtable<Object*, Object*>* hashtable;

    private: ABHashtable<Object*, Object*>* rectangleHashtable;

    private: ABHashtable<Object*, Object*>* rectangleArrayOfArraysHashtable;

    private: std::string name;

    private: bool initialized= false;

public: BaseResourceAnimationInterfaceFactoryInterfaceFactory(std::string name, ABHashtable<Object*, Object*>* hashtable, ABHashtable<Object*, Object*>* rectangleHashtable, ABHashtable<Object*, Object*>* rectangleArrayHashtable){
this->hashtable= hashtable;
    
this->rectangleHashtable= rectangleHashtable;
    
this->rectangleArrayOfArraysHashtable= rectangleArrayHashtable;
    
this->name= name;
    
}


    public: std::string getName(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->name;
    
}


                //@Throws(Exception.constructor)
            
    public: void init(int32_t level){

    CommonStrings* commonStrings = CommonStrings::getInstance();;
    
this->logUtil->putF((new StringMaker())->append("Available List of Animations: ")->append(this->hashtable->toString())->toString(), this, commonStrings->INIT);
    
this->setInitialized(true);
    
}


                //@Throws(Exception.constructor)
            
    protected: void initImageCache(ImageCache* imageCache, int32_t level){
}


                //@Throws(Exception.constructor)
            
    public: void add(std::string resource, BasicAnimationInterfaceFactoryInterface* animationInterfaceFactoryInterface){

                        if(this->hashtable->containsKey(resource))
                        
                                    {
                                    


                            throw new Exception((new StringMaker())->append("Resource Already Created: ")->append(resource)->toString());
                    

                                    }
                                
this->hashtable->put(resource, animationInterfaceFactoryInterface);
    
}


                //@Throws(Exception.constructor)
            
    public: BasicAnimationInterfaceFactoryInterface* getBasicAnimationInterfaceFactoryInstance(std::string resource){

    Object* basicAnimationInterfaceFactoryInterfaceCanBeNull = this->hashtable->get(resource);;
    

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
            
    public: Rectangle* getRectangle(std::string resource){

    Object* rectangleCanBeNull = this->rectangleHashtable->get(resource);;
    

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
            
    public: void addRectangle(std::string resource, Rectangle* rectangle){
this->rectangleHashtable->put(resource, rectangle);
    
}


                //@Throws(Exception.constructor)
            
    public: std::vector<std::vector<Rectangle*>> getRectangleArrayOfArrays(std::string resource){

    Object* valueCanBeNull = this->rectangleArrayOfArraysHashtable->get(resource);;
    

                        if(valueCanBeNull != 
                                    nullptr
                                )
                        
                                    {
                                    
    std::vector<std::vector<Rectangle*>> rectangleArrayOfArrays = valueCanBeNull as std::vector<Rectangle*>[];;
    



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return rectangleArrayOfArrays;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return RectangleFactory::ARRAY_OF_ARRAYS;
    

                        }
                            
}


                //@Throws(Exception.constructor)
            
    public: void addRectangleArrayOfArrays(std::string resource, std::vector<std::vector<Rectangle*>> rectangleArrayOfArrays){
this->rectangleArrayOfArraysHashtable->put(resource, rectangleArrayOfArrays);
    
}


    public: bool isFeature(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public: bool isLoadingLevel(int32_t level){

    ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory::getInstance();;
    

                        if(level == resourceLoadingLevelFactory->LOAD_ALL.getLevel())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return true;
    

                                    }
                                
                        else {
                            


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    

                        }
                            
}


    public: std::string toString(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return (new StringMaker())->append(this->getClass()->getName())->append(CommonSeps::getInstance()->SEMICOLON)->append(CommonSeps::getInstance()->SPACE)->append(this->name)->toString();;
    
}


    public: ABHashtable<Object*, Object*>* getHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->hashtable;
    
}


    public: ABHashtable<Object*, Object*>* getRectangleHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangleHashtable;
    
}


    public: ABHashtable<Object*, Object*>* getRectangleArrayOfArraysHashtable(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->rectangleArrayOfArraysHashtable;
    
}


    protected: void setInitialized(bool initialized){
this->initialized= initialized;
    
}


    public: bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->initialized;
    
}


};

            

