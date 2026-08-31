
        /*
                *  
                *  AllBinary Open License Version 1 
                *  Copyright (c) 2025 AllBinary 
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
        



        #ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_PERSISTANCESTRINGS_H
        #define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_PERSISTANCESTRINGS_H

            #include "../../../../../java/lang/Object.h"
        
#include <jsinterop/annotations/JsType.h>

      
#include <jsinterop/annotations/JsMethod.h>

      
#include <jsinterop/annotations/JsProperty.h>

      
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class PersistanceStrings
            : public Object
         {
        

    private: static const instance: PersistanceStrings = new PersistanceStrings();

    public static PersistanceStrings getInstance();

    public const SAVING: string = "Saving: ";

    public const NUMBER_OF_RECORDS: string = "Number of records: ";

    public const LOADING_ID: string = "Loading data with id: ";

    public const LOAD_ALL: string = "loadAll";

    public const DELETING_WITH_ID: string = "Deleting data with id: ";

    public const CLOSING_RECORDSTORE: string = "Closing RecordStore";

    public const NOT_SAVING: string = "Not Saving: ";

    public const ERROR_LOADING: string = "Error Loading gameActionInput: ";

    public const ERROR_LOADING_ID: string = "Error Loading id: ";

    public const ID: string = " id: ";

    public const GAME_ACTION_INPUT: string = " GameActionInput: ";

};

            


        #endif //ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_PERSISTANCESTRINGS_H
