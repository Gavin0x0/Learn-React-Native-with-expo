import React from "react";
import styled from "styled-components";

const Card = (props) => (
  <Container>
    <Cover>
      <Image source={require("../assets/background.jpg")} />
      <Title>Styled Components</Title>
    </Cover>
    <Content>
      <Logo source={require("../assets/logo.png")} />
      <Caption>React Native</Caption>
      <Subtitle>5 of 12 sections</Subtitle>
    </Content>
  </Container>
);

export default Card;

const Container = styled.View`
  background: yellowgreen;
  width: 315px;
  height: 280px;
  border-radius: 14px;
  margin-left: 20px;
  margin-top: 20px;
  box-shadow: 0 5px 15px rgba(0, 0, 0, 0.33);
`;
const Cover = styled.View`
  width: 100%;
  height: 200px;
  border-top-left-radius: 14px;
  border-top-right-radius: 14px;
  overflow: hidden;
`;
const Image = styled.Image`
  width: 100%;
  height: 100%;
  position: absolute;
  top: 0;
  left: 0;
`;
const Title = styled.Text`
  color: black;
  font-size: 24px;
  font-weight: bold;
  margin-top: 20px;
  margin-left: 20px;
  width: 170px;
`;

const Content = styled.View`
  padding-left: 20px;
  flex-direction: row;
`;

const Logo = styled.Image`
  width: 44px;
  height: 44px;
`;
const Caption = styled.Text``;
const Subtitle = styled.Text``;
