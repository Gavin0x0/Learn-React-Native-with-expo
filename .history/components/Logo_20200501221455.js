import React from "react";
import styled from "styled-components";

const Logo = (props) => (
  <Continer>
    <Image source={props.image} resizeMode='contain' />
    <Text>{props.text}</Text>
  </Continer>
);

export default Logo;

const Continer = styled.View``;
const Image = styled.Image`
  width: 36px;
  height: 36px;
`;
const Text = styled.Text`
  font-weight: 600;
  font-size: 17px;
  margin-left: 8px;
`;
