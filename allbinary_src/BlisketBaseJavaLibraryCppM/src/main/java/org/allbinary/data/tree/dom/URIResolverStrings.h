
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
        



        #ifndef ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_H
        #define ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_H

            #include "../../../../../java/lang/Object.h"
        
















                                        
        //Current folder imports from return types, extended types, and scope (deduplicated)
        
class URIResolverStrings
            : public Object
         {
        

    private: static const instance: URIResolverStrings = new URIResolverStrings();

    public static URIResolverStrings getInstance();

    public const IMPORT_URL: string = "/{import url}";

    public const ATTEMPT: string = "attempt to use xsl:import: href=";

    public const BASE: string = "\nBase= ";

    public const NEW_PATH: string = "\nNew path= ";

    public const NOTE: string = "\nNote: ";

    public const URL_GLOBAL: string = " is a urlglobal";

    public const REQUIRED_EXTENSION: string = "\nRequired Extension: ";

    public const RESOLVE: string = "resolve";

};

            


        #endif //ORG_ALLBINARY_DATA_TREE_DOM_URIRESOLVERSTRINGS_H
