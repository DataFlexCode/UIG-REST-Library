Use cWebHttpHandler.pkg

//  With the cWebHttpHandler you handle complete HTTP requests.
Object oNewHttpHandler is a cWebHttpHandler
    
    //  The psPath property determines the path in the URL for which requests will be handled.
    Set psPath to "MyHandler"
    //  Use psVerbs to filter based on the HTTP Verbs. 
    Set psVerbs to "*"
    
End_Object


