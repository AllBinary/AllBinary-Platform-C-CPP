
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
        



            #include "java/lang/Exception.h"
        
#include <org/allbinary/graphics/PointFactory.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/layer/AllBinaryLayer.h>

      
#include <org/allbinary/layer/relationship/RelativeLayerRelationship.h>

      
#include <org/allbinary/logic/string/StringMaker.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "FeaturedResourceFactory.h"
#include "ResourceRelativeRelationshipFactoryInterface.h"

class FeaturedResourceRelativeRelationshipFactory: public FeaturedResourceFactory {

    private: static FeaturedResourceRelativeRelationshipFactory INSTANCE = FeaturedResourceRelativeRelationshipFactory();

    public: static FeaturedResourceRelativeRelationshipFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FeaturedResourceRelativeRelationshipFactory::INSTANCE;
    
}


private: FeaturedResourceRelativeRelationshipFactory(){
}


    private: const BasicArrayListUtil basicArrayListUtil = BasicArrayListUtil::getInstance();

                //@Throws(Exception.constructor)
            
    public: BasicArrayList getRelativeRelationshipList(std::string resource, AllBinaryLayer layer){

    BasicArrayList featureReleaseList = this->getList();;
    

    int32_t size = this->getList().size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    ResourceRelativeRelationshipFactoryInterface featureInterface = featureReleaseList.objectArray[index];;
    

                        if(featureInterface.isFeature())
                        
                                    {
                                    
    BasicArrayList list = featureInterface.getResourceRelativeRelationshipList(resource);;
    

                        if(list != this->basicArrayListUtil.getImmutableInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this->duplicate(list, layer);;
    

                                    }
                                

                                    }
                                
}




                            throw Exception(StringMaker().append("Not available for current feature selection or Resource: ").append(resource).toString());
                    
}


                //@Throws(Exception.constructor)
            
    private: BasicArrayList duplicate(BasicArrayList list, AllBinaryLayer layer){

    PointFactory pointFactory = PointFactory::getInstance();;
    

    BasicArrayList newList = BasicArrayListD();;
    

    int32_t size = list.size();;
    




                        for (
    int32_t index = 0;index < size; index++)
        {

    RelativeRelationship relativeRelationship = list.objectArray[index];;
    
newList.add(RelativeLayerRelationship(layer, pointFactory.createXY(relativeRelationship.getX(), relativeRelationship.getY()), BasicArrayListUtil::getInstance().getImmutableInstance()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newList;
    
}


};

            

