
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
        



            #include "../../../../java/lang/Object.h"
        
            #include "../../../../java/lang/Exception.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/graphics/RelativeRelationship.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        #include "ResourceRelativeRelationshipFactoryInterface.h"

class ResourceRelativeRelationshipFactory
            : public Object
        : public ResourceRelativeRelationshipFactoryInterface {
        

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: const hashtable: Hashtable<any, any> = new Hashtable<any, any>();

    private: initialized: bool= false;

                //@Throws(Exception.constructor)
            
    public init(int32_t level){
this.setInitialized(true);
    
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getResourceRelativeRelationshipList(string resource){

    listCanBeNull: any = this.hashtable.get(resource);;
    

                        if(listCanBeNull == 
                                    null
                                )
                        
                                    {
                                    


                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.basicArrayListUtil!.getImmutableInstance();;
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return listCanBeNull as BasicArrayList;
    
}


                //@Throws(Exception.constructor)
            
    public addResourceRelativeRelationship(string resource, RelativeRelationship hardPoint){

    list: BasicArrayList = this.getResourceRelativeRelationshipList(resource)!;;
    

                        if(list == this.basicArrayListUtil!.getImmutableInstance())
                        
                                    {
                                    list= new BasicArrayListD();
    

                                    }
                                
list.add(hardPoint);
    
this.hashtable.put(resource, list);
    
}


    public bool isLoadingLevel(int32_t level){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public bool isFeature(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return false;
    
}


    public setInitialized(bool initialized){
this.initialized= initialized;
    
}


    public bool isInitialized(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.initialized;
    
}


};

            

