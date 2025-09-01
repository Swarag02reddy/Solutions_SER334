 int i,j;
    for(i=0;i<NUMBER_OF_CHUNKS;i++){
        for(j=0;j<CHUNK_LENGTH;j++){
            if(chunks[i][j]==NULL || j==0){
                continue;
            }
            printf("%c",chunks[i][j]);
        }
        
    }