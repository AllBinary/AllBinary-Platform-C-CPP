
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
        
            #include "../../../../java/lang/Integer.h"
        
#include <java/util/Enumeration.h>

      
#include <java/util/Hashtable.h>

      
#include <org/allbinary/layer/Layer.h>

      
#include <org/allbinary/logic/math/SmallIntegerSingletonFactory.h>

      
#include <org/allbinary/util/BasicArrayList.h>

      
#include <org/allbinary/util/BasicArrayListD.h>

      
#include <org/allbinary/util/EnumerationUtil.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class LevelLayersFinder
            : public Object
         {
        

    private: static const instance: LevelLayersFinder = new LevelLayersFinder();

    public static LevelLayersFinder getInstance(){



                        //if statement needs to be on the same line and ternary does not work the same way.
                        return LevelLayersFinder.instance;
    
}


    private: const enumerationUtil: EnumerationUtil = EnumerationUtil.getInstance()!;

    public BasicArrayList get(Hashtable<any, any> hashtable){

    smallIntegerSingletonFactory: SmallIntegerSingletonFactory = SmallIntegerSingletonFactory.getInstance()!;;
    

    list: BasicArrayList = new BasicArrayListD();;
    

    enumeration: Enumeration<any> = hashtable.keys()!;;
    

    layerHashtableCanBeNull: Hashtable<any, any>;;
    

    integerCanBeNull: Integer;;
    

    cachedIntegerCanBeNull: Integer;;
    

        while(this.enumerationUtil!.hasMoreElements(enumeration))
        {
layerHashtableCanBeNull= hashtable.get(this.enumerationUtil!.nextElement(enumeration)!) as Hashtable<any, any>;
    
integerCanBeNull= layerHashtableCanBeNull!.get(Layer.ID) as Integer;
    
cachedIntegerCanBeNull= smallIntegerSingletonFactory!.getAt(integerCanBeNull!.intValue());
    

                        if(!list.contains(cachedIntegerCanBeNull))
                        
                                    {
                                    list.add(cachedIntegerCanBeNull);
    

                                    }
                                
}




                        //if statement needs to be on the same line and ternary does not work the same way.
                        return list;
    
}


};

            

