cbuffer MatrixBuffer {
    matrix worldMatrix;
    matrix viewMatrix;
    matrix projectionMatrix;
};

struct VertexInputType {
    float4 position : POSITION;
    float2 texcoord : TEXCOORD;
    float3 normal : NORMAL;
};

struct PixelInputType {
    float4 position : SV_POSITION;
    float2 texcoord : TEXCOORD;
};

PixelInputType Main(VertexInputType input) {
    PixelInputType output;

    // Transform the vertex position into 4D space
    output.position = mul(input.position, worldMatrix);
    output.position = mul(output.position, viewMatrix);
    output.position = mul(output.position, projectionMatrix);

    // Pass through the texture coordinate
    output.texcoord = input.texcoord;

    return output;
}
