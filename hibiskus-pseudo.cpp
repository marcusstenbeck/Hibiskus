main()
{
	// Create engine instance
	Hibiskus *hibiskus = Hibiskus::getSingleton();

	// ** Create shader programs **
	// Create a shader
	Shader *shader = new Shader(vertexShader, fragmentShader);
	// Attach the shader to the engine
	hibiskus->attachShader(shader);

	// ** Build Scene Graph **
	// Root world node
	NodeWorld *world = new NodeWorld();
	// Attach stuff
	NodeMesh *bunny = new NodeMesh(bunny);
	// ...
	// Attach scene graph to the engine
	hibiskus->attachRootNode(world);

	// Now that we're done with all the setup, run the engine!
	hibiskus->run();

	return 0;
}