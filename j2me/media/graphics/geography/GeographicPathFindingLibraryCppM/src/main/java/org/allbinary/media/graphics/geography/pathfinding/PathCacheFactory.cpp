
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
        



            #include "../../../../../../java/lang/Object.h"
        
            #include "../../../../../../java/lang/Exception.h"
        
            #include "../../../../../../java/lang/Integer.h"
        
#include <java/util/Hashtable.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PathCacheFactory
            : public Object
         {
        

    private: static pathFactory: PathCacheFactory = new PathCacheFactory();

    public static PathCacheFactory getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return PathCacheFactory.pathFactory;
    
}


    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: hashtable: Hashtable<any, any> = new Hashtable<any, any>();

private constructor (){

            super();
        }


    public int32_t getSize(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return this.hashtable.length;;
    
}


    public add(Integer pathId, BasicArrayList list){
this.hashtable.put(pathId, list);
    
}


    public remove(Integer pathId){
this.hashtable.remove(pathId);
    
}


                //@Throws(Exception.constructor)
            
    public removeAll(){
this.hashtable.clear();
    

                        if(this.hashtable.length > 0)
                        
                                    {
                                    


                            throw new Exception("Did not clear");
                    

                                    }
                                
}


                //@Throws(Exception.constructor)
            
    public BasicArrayList getOrCreate(Integer pathIdInteger){

    listCanBeNull: any = this.hashtable.get(pathIdInteger);;
    

                        if(listCanBeNull == 
                                    null
                                )
                        
                                    {
                                    listCanBeNull= this.basicArrayListUtil!.getImmutableInstance();
    

                                    }
                                



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return listCanBeNull as BasicArrayList;
    
}


};

            

