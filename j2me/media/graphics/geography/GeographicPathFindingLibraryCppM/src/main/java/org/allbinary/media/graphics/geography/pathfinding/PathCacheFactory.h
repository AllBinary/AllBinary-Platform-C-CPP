
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
        



        #ifndef ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHCACHEFACTORY_H
        #define ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHCACHEFACTORY_H

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

    public static PathCacheFactory getInstance();

    private: const basicArrayListUtil: BasicArrayListUtil = BasicArrayListUtil.getInstance()!;

    private: hashtable: Hashtable<any, any> = new Hashtable<any, any>();

private constructor ();

    public int32_t getSize();

    public add(Integer pathId, BasicArrayList list);

    public remove(Integer pathId);

                //@Throws(Exception.constructor)
            
    public removeAll();

                //@Throws(Exception.constructor)
            
    public BasicArrayList getOrCreate(Integer pathIdInteger);

};

            


        #endif //ORG_ALLBINARY_MEDIA_GRAPHICS_GEOGRAPHY_PATHFINDING_PATHCACHEFACTORY_H
