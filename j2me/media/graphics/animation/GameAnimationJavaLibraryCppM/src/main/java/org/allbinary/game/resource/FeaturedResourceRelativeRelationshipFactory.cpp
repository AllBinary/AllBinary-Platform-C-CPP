
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
        



            #include "../../../../java/lang/Exception.h"
        
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
        

    private: static INSTANCE: FeaturedResourceRelativeRelationshipFactory = new FeaturedResourceRelativeRelationshipFactory();

    public static FeaturedResourceRelativeRelationshipFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return FeaturedResourceRelativeRelationshipFactory.INSTANCE;
    
}


private constructor (){

            super();
        }


    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

                //@Throws(Exception.constructor)
            
    public BasicArrayList getRelativeRelationshipList(string resource, AllBinaryLayer layer){

    featureReleaseList: BasicArrayList = this.getList()!;;
    

    size: int32_t = this.getList()!.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    featureInterface: ResourceRelativeRelationshipFactoryInterface = featureReleaseList!.objectArray[index]! as ResourceRelativeRelationshipFactoryInterface;;
    

                        if(featureInterface!.isFeature())
                        
                                    {
                                    
    list: BasicArrayList = featureInterface!.getResourceRelativeRelationshipList(resource)!;;
    

                        if(list != this.basicArrayListUtil!.getImmutableInstance())
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.duplicate(list, layer);;
    

                                    }
                                

                                    }
                                
}




                            throw new Exception(new StringMaker().append("Not available for current feature selection or Resource: ")!.append(resource)!.toString());
                    
}


                //@Throws(Exception.constructor)
            
    BasicArrayList duplicate(BasicArrayList list, AllBinaryLayer layer){

    pointFactory: PointFactory = PointFactory.getInstance()!;;
    

    newList: BasicArrayList = new BasicArrayListD();;
    

    size: int32_t = list.size()!;;
    




                        for (
    index: int32_t = 0;index < size; index++)
        {

    relativeRelationship: RelativeRelationship = list.objectArray[index]! as RelativeRelationship;;
    
newList!.add(new RelativeLayerRelationship(layer, pointFactory!.createXY(relativeRelationship!.getX(), relativeRelationship!.getY()), BasicArrayListUtil.getInstance()!.getImmutableInstance()));
    
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return newList;
    
}


};

            

